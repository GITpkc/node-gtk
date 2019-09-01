/* autogenerated by generator-pattern.js */

#pragma once

#include <nan.h>
#include <node.h>
#include <girepository.h>
#include <glib.h>
#include <cairo.h>

namespace GNodeJS {

namespace Cairo {


class Pattern: public Nan::ObjectWrap {
  public:
    static Nan::Persistent<v8::FunctionTemplate> constructorTemplate;
    static Nan::Persistent<v8::Function>         constructor;
    static void Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target);
    static void SetupTemplate();
    static Local<v8::FunctionTemplate> GetTemplate();
    static Local<v8::Function> GetConstructor();

    static NAN_METHOD(New);

    static NAN_METHOD(createRgb);
    static NAN_METHOD(createRgba);
    static NAN_METHOD(createRadial);
    static NAN_METHOD(createMesh);
    static NAN_METHOD(createLinear);
    static NAN_METHOD(createForSurface);
    static NAN_METHOD(addColorStopRgb);
    static NAN_METHOD(addColorStopRgba);
    static NAN_METHOD(getColorStopCount);
    static NAN_METHOD(getColorStopRgba);
    static NAN_METHOD(getRgba);
    static NAN_METHOD(status);
    static NAN_METHOD(setExtend);
    static NAN_METHOD(getExtend);
    static NAN_METHOD(setFilter);
    static NAN_METHOD(getFilter);
    static NAN_METHOD(setMatrix);
    static NAN_METHOD(getMatrix);
    static NAN_METHOD(getType);
    static NAN_METHOD(getReferenceCount);


    Pattern(cairo_pattern_t* data);
    ~Pattern();

    cairo_pattern_t* _data;
};

class LinearPattern: public Pattern {
  public:
    static Nan::Persistent<v8::FunctionTemplate> constructorTemplate;
    static Nan::Persistent<v8::Function>         constructor;
    static void Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target);
    static void SetupTemplate(Local<v8::FunctionTemplate> parentTpl);
    static Local<v8::FunctionTemplate> GetTemplate();
    static Local<v8::Function> GetConstructor();

    static NAN_METHOD(New);

    static NAN_METHOD(getLinearPoints);


    LinearPattern(cairo_pattern_t* data) : Pattern(data) {};
};

class RadialPattern: public Pattern {
  public:
    static Nan::Persistent<v8::FunctionTemplate> constructorTemplate;
    static Nan::Persistent<v8::Function>         constructor;
    static void Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target);
    static void SetupTemplate(Local<v8::FunctionTemplate> parentTpl);
    static Local<v8::FunctionTemplate> GetTemplate();
    static Local<v8::Function> GetConstructor();

    static NAN_METHOD(New);

    static NAN_METHOD(getRadialCircles);


    RadialPattern(cairo_pattern_t* data) : Pattern(data) {};
};

class MeshPattern: public Pattern {
  public:
    static Nan::Persistent<v8::FunctionTemplate> constructorTemplate;
    static Nan::Persistent<v8::Function>         constructor;
    static void Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target);
    static void SetupTemplate(Local<v8::FunctionTemplate> parentTpl);
    static Local<v8::FunctionTemplate> GetTemplate();
    static Local<v8::Function> GetConstructor();

    static NAN_METHOD(New);

    static NAN_METHOD(beginPatch);
    static NAN_METHOD(endPatch);
    static NAN_METHOD(moveTo);
    static NAN_METHOD(lineTo);
    static NAN_METHOD(curveTo);
    static NAN_METHOD(setControlPoint);
    static NAN_METHOD(setCornerColorRgb);
    static NAN_METHOD(setCornerColorRgba);
    static NAN_METHOD(getPatchCount);
    static NAN_METHOD(getPath);
    static NAN_METHOD(getControlPoint);
    static NAN_METHOD(getCornerColorRgba);


    MeshPattern(cairo_pattern_t* data) : Pattern(data) {};
};

}; // Cairo

}; // GNodeJS