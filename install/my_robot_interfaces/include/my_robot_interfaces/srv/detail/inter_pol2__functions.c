// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_robot_interfaces:srv/InterPol2.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/srv/detail/inter_pol2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `shape`
#include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__srv__InterPol2_Request__init(my_robot_interfaces__srv__InterPol2_Request * msg)
{
  if (!msg) {
    return false;
  }
  // posx
  // posy
  // posz
  // r
  // p
  // y
  // time
  // shape
  if (!rosidl_runtime_c__String__init(&msg->shape)) {
    my_robot_interfaces__srv__InterPol2_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__srv__InterPol2_Request__fini(my_robot_interfaces__srv__InterPol2_Request * msg)
{
  if (!msg) {
    return;
  }
  // posx
  // posy
  // posz
  // r
  // p
  // y
  // time
  // shape
  rosidl_runtime_c__String__fini(&msg->shape);
}

my_robot_interfaces__srv__InterPol2_Request *
my_robot_interfaces__srv__InterPol2_Request__create()
{
  my_robot_interfaces__srv__InterPol2_Request * msg = (my_robot_interfaces__srv__InterPol2_Request *)malloc(sizeof(my_robot_interfaces__srv__InterPol2_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__srv__InterPol2_Request));
  bool success = my_robot_interfaces__srv__InterPol2_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__srv__InterPol2_Request__destroy(my_robot_interfaces__srv__InterPol2_Request * msg)
{
  if (msg) {
    my_robot_interfaces__srv__InterPol2_Request__fini(msg);
  }
  free(msg);
}


bool
my_robot_interfaces__srv__InterPol2_Request__Sequence__init(my_robot_interfaces__srv__InterPol2_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_robot_interfaces__srv__InterPol2_Request * data = NULL;
  if (size) {
    data = (my_robot_interfaces__srv__InterPol2_Request *)calloc(size, sizeof(my_robot_interfaces__srv__InterPol2_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__srv__InterPol2_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__srv__InterPol2_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_robot_interfaces__srv__InterPol2_Request__Sequence__fini(my_robot_interfaces__srv__InterPol2_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_robot_interfaces__srv__InterPol2_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_robot_interfaces__srv__InterPol2_Request__Sequence *
my_robot_interfaces__srv__InterPol2_Request__Sequence__create(size_t size)
{
  my_robot_interfaces__srv__InterPol2_Request__Sequence * array = (my_robot_interfaces__srv__InterPol2_Request__Sequence *)malloc(sizeof(my_robot_interfaces__srv__InterPol2_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__srv__InterPol2_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__srv__InterPol2_Request__Sequence__destroy(my_robot_interfaces__srv__InterPol2_Request__Sequence * array)
{
  if (array) {
    my_robot_interfaces__srv__InterPol2_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `description`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__srv__InterPol2_Response__init(my_robot_interfaces__srv__InterPol2_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    my_robot_interfaces__srv__InterPol2_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__srv__InterPol2_Response__fini(my_robot_interfaces__srv__InterPol2_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

my_robot_interfaces__srv__InterPol2_Response *
my_robot_interfaces__srv__InterPol2_Response__create()
{
  my_robot_interfaces__srv__InterPol2_Response * msg = (my_robot_interfaces__srv__InterPol2_Response *)malloc(sizeof(my_robot_interfaces__srv__InterPol2_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__srv__InterPol2_Response));
  bool success = my_robot_interfaces__srv__InterPol2_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__srv__InterPol2_Response__destroy(my_robot_interfaces__srv__InterPol2_Response * msg)
{
  if (msg) {
    my_robot_interfaces__srv__InterPol2_Response__fini(msg);
  }
  free(msg);
}


bool
my_robot_interfaces__srv__InterPol2_Response__Sequence__init(my_robot_interfaces__srv__InterPol2_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_robot_interfaces__srv__InterPol2_Response * data = NULL;
  if (size) {
    data = (my_robot_interfaces__srv__InterPol2_Response *)calloc(size, sizeof(my_robot_interfaces__srv__InterPol2_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__srv__InterPol2_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__srv__InterPol2_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_robot_interfaces__srv__InterPol2_Response__Sequence__fini(my_robot_interfaces__srv__InterPol2_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_robot_interfaces__srv__InterPol2_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_robot_interfaces__srv__InterPol2_Response__Sequence *
my_robot_interfaces__srv__InterPol2_Response__Sequence__create(size_t size)
{
  my_robot_interfaces__srv__InterPol2_Response__Sequence * array = (my_robot_interfaces__srv__InterPol2_Response__Sequence *)malloc(sizeof(my_robot_interfaces__srv__InterPol2_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__srv__InterPol2_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__srv__InterPol2_Response__Sequence__destroy(my_robot_interfaces__srv__InterPol2_Response__Sequence * array)
{
  if (array) {
    my_robot_interfaces__srv__InterPol2_Response__Sequence__fini(array);
  }
  free(array);
}
