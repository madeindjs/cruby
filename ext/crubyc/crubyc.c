#include <ruby.h>

// VALUE rb_cprint(VALUE self, VALUE str) {
//   if (RB_TYPE_P(str, T_STRING) == 1) {
//     return rb_sprintf("Printed from C code: %ld", str);
//   }
//   return Qnil;
// }
//
// void Init_cruby() {
//   VALUE mod = rb_define_module("Crubyc");
//   rb_define_method(mod, "print", rb_cprint, 0);
// }
