// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo_inference:msg/Yolov8Inference.idl
// generated code does not contain a copyright notice
#include "yolo_inference/msg/detail/yolov8_inference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `yolov8_inference`
#include "yolo_inference/msg/detail/inference_result__functions.h"

bool
yolo_inference__msg__Yolov8Inference__init(yolo_inference__msg__Yolov8Inference * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    yolo_inference__msg__Yolov8Inference__fini(msg);
    return false;
  }
  // yolov8_inference
  if (!yolo_inference__msg__InferenceResult__Sequence__init(&msg->yolov8_inference, 0)) {
    yolo_inference__msg__Yolov8Inference__fini(msg);
    return false;
  }
  return true;
}

void
yolo_inference__msg__Yolov8Inference__fini(yolo_inference__msg__Yolov8Inference * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yolov8_inference
  yolo_inference__msg__InferenceResult__Sequence__fini(&msg->yolov8_inference);
}

bool
yolo_inference__msg__Yolov8Inference__are_equal(const yolo_inference__msg__Yolov8Inference * lhs, const yolo_inference__msg__Yolov8Inference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // yolov8_inference
  if (!yolo_inference__msg__InferenceResult__Sequence__are_equal(
      &(lhs->yolov8_inference), &(rhs->yolov8_inference)))
  {
    return false;
  }
  return true;
}

bool
yolo_inference__msg__Yolov8Inference__copy(
  const yolo_inference__msg__Yolov8Inference * input,
  yolo_inference__msg__Yolov8Inference * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // yolov8_inference
  if (!yolo_inference__msg__InferenceResult__Sequence__copy(
      &(input->yolov8_inference), &(output->yolov8_inference)))
  {
    return false;
  }
  return true;
}

yolo_inference__msg__Yolov8Inference *
yolo_inference__msg__Yolov8Inference__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_inference__msg__Yolov8Inference * msg = (yolo_inference__msg__Yolov8Inference *)allocator.allocate(sizeof(yolo_inference__msg__Yolov8Inference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_inference__msg__Yolov8Inference));
  bool success = yolo_inference__msg__Yolov8Inference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_inference__msg__Yolov8Inference__destroy(yolo_inference__msg__Yolov8Inference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_inference__msg__Yolov8Inference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_inference__msg__Yolov8Inference__Sequence__init(yolo_inference__msg__Yolov8Inference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_inference__msg__Yolov8Inference * data = NULL;

  if (size) {
    data = (yolo_inference__msg__Yolov8Inference *)allocator.zero_allocate(size, sizeof(yolo_inference__msg__Yolov8Inference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_inference__msg__Yolov8Inference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_inference__msg__Yolov8Inference__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolo_inference__msg__Yolov8Inference__Sequence__fini(yolo_inference__msg__Yolov8Inference__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolo_inference__msg__Yolov8Inference__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolo_inference__msg__Yolov8Inference__Sequence *
yolo_inference__msg__Yolov8Inference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_inference__msg__Yolov8Inference__Sequence * array = (yolo_inference__msg__Yolov8Inference__Sequence *)allocator.allocate(sizeof(yolo_inference__msg__Yolov8Inference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_inference__msg__Yolov8Inference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_inference__msg__Yolov8Inference__Sequence__destroy(yolo_inference__msg__Yolov8Inference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_inference__msg__Yolov8Inference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_inference__msg__Yolov8Inference__Sequence__are_equal(const yolo_inference__msg__Yolov8Inference__Sequence * lhs, const yolo_inference__msg__Yolov8Inference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_inference__msg__Yolov8Inference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_inference__msg__Yolov8Inference__Sequence__copy(
  const yolo_inference__msg__Yolov8Inference__Sequence * input,
  yolo_inference__msg__Yolov8Inference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_inference__msg__Yolov8Inference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo_inference__msg__Yolov8Inference * data =
      (yolo_inference__msg__Yolov8Inference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_inference__msg__Yolov8Inference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo_inference__msg__Yolov8Inference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo_inference__msg__Yolov8Inference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
