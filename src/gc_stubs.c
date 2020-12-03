#define CAML_INTERNALS
#include <caml/memory.h>
#include <caml/gc_ctrl.h>

static intnat minor_words(void)
{
  return (intnat) (0);
}

static intnat promoted_words(void)
{
  return ((intnat) 0);
}

CAMLprim value core_kernel_gc_minor_words(value unit __attribute__((unused)))
{
  return Val_long(minor_words());
}

static intnat major_words(void)
{
  return (intnat) (0);
}

CAMLprim value core_kernel_gc_major_words(value unit __attribute__((unused)))
{
  return Val_long(major_words());
}

CAMLprim value core_kernel_gc_promoted_words(value unit __attribute__((unused)))
{
  return Val_long(promoted_words());
}

CAMLprim value core_kernel_gc_minor_collections(value unit __attribute__((unused)))
{
  return Val_long(0);
}

CAMLprim value core_kernel_gc_major_collections(value unit __attribute__((unused)))
{
  return Val_long(0);
}

CAMLprim value core_kernel_gc_heap_words(value unit __attribute__((unused)))
{
  return Val_long(0);
}

CAMLprim value core_kernel_gc_heap_chunks(value unit __attribute__((unused)))
{
  return Val_long(0);
}

CAMLprim value core_kernel_gc_compactions(value unit __attribute__((unused)))
{
  return Val_long(0);
}

CAMLprim value core_kernel_gc_top_heap_words(value unit __attribute__((unused)))
{
  return Val_long(0);
}

CAMLprim value core_kernel_gc_major_plus_minor_words(value unit __attribute__((unused)))
{
  return Val_long(minor_words() + major_words());
}

CAMLprim value core_kernel_gc_allocated_words(value unit __attribute__((unused)))
{
  return Val_long(minor_words() + major_words() - promoted_words());
}
