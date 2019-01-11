#include <ruby.h>
#include <libcurl.h>

VALUE rb_curl(VALUE self, VALUE str) {
  if (RB_TYPE_P(str, T_STRING) == 1) {
    CURL *curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, "https://www.googleapis.com/tasks/v1/users?name=pradeep&lastname=singla");
    curl_easy_perform(curl);
    return Qnil;
  }
  return Qnil;
}

void Init_crubyc() {
  VALUE mod = rb_define_module("Cruby");
  rb_define_singleton_method(mod, "rb_curl", rb_curl, 1);
}
