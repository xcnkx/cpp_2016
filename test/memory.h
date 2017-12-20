#ifndef MEMORY_H
#define MEMORY_H

#include <cstddef>

/*
  Implementation of a shared pointer (smart pointer). 
*/

namespace util {

  // Class definition
  template <class T>
  class shared_ptr {
  public:
    // constructors:
    // Constructs a new shared_ptr managing the resource 
    // specified as the parameter. Initially set the reference
    // counter to 1.
    // Assume that t is obtained from new 
    // otherwise the helper function make_shared needs to be used.
    explicit shared_ptr(T* t);

    // Constructs a shared_ptr that shares the resource contained 
    // in another shared_ptr, updating the reference counter 
    // appropriately.
    shared_ptr(const shared_ptr& other);
    
    // assignment:
    // Causes this shared_ptr to stop pointing to the resource 
    // currently managed, and to share the resource held by 
    // the shared_ptr argument. 
    // If the shared pointer was the last pointer to the resource,
    // it deletes it.
    shared_ptr& operator=(const shared_ptr& other);
    
    // destructor:
    // Decrease the counter, and if necessary, deletes the 
    // associated resource. 
    ~shared_ptr();


    // observers:
    // Dereference the pointer and returns a reference to the 
    // object being pointed at.
    T& operator* () const;
    
    // Returns the object that the arrow operator should be really 
    // applied to (i.e. the resource)
    T* operator-> () const;

    // Returns the managed pointer directly
    T* get() const;
    
    //  Gets the value of the counter.
    std::size_t get_count() const;


    // modifiers:
    // Reset the shared pointer to point to a different resource.
    // If the shared_ptr was the last pointer to the resource, it 
    // should delete it.
    void reset(T* p);


  private:
    // The pointer to the reference counter. 
    // It tracks the number of shared_ptr owning the resource.
    std::size_t* count;

    // Pointer to the resource to be managed.
    T* resource;
  };


  // Non-member functions
  // Constructs an object of type T and wraps it in a shared_ptr<T>.
  template <class T>
  shared_ptr<T> make_shared(T t);

}

#endif
