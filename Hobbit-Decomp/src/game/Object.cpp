// Reimplementation of Support/Objects/Object.cpp — object base-class virtuals.
#include "core/hook.h"
#include "meridian/object.h"

// 0x00425520  vtable slot 10: const vector3& object::GetPosition()
const vector3* __fastcall object_GetPosition(object* self, void*) {
    FN_ENTER(object_GetPosition);
    return &self->Position;
}
REPLACE(0x00425520, object_GetPosition);

// 0x00425530  vtable slot 11: const vector3& object::GetInitialPos()
const vector3* __fastcall object_GetInitialPos(object* self, void*) {
    FN_ENTER(object_GetInitialPos);
    return &self->InitialPos;
}
REPLACE(0x00425530, object_GetInitialPos);

// 0x00425800  vtable slot 14: const bbox& object::GetLocalBBox()
const bbox* __fastcall object_GetLocalBBox(object* self, void*) {
    FN_ENTER(object_GetLocalBBox);
    return &self->LocalBBox;
}
REPLACE(0x00425800, object_GetLocalBBox);

// 0x00425860  vtable slot 37: xbool object::GetFlag8()  (ObjectFlags bit 3)
xbool __fastcall object_GetFlag8(object* self, void*) {
    FN_ENTER(object_GetFlag8);
    return static_cast<u8>(self->ObjectFlags) & 8;
}
REPLACE(0x00425860, object_GetFlag8);

// 0x00425870  vtable slot 38: void object::SetFlag8(xbool on)
void __fastcall object_SetFlag8(object* self, void*, xbool on) {
    FN_ENTER(object_SetFlag8);
    // byte-sized like the original (or/and byte [ecx+7Ah])
    if (on)
        Field<u8>(self, 0x7A) |= 8;
    else
        Field<u8>(self, 0x7A) &= ~8;
}
REPLACE(0x00425870, object_SetFlag8);

// 0x004AA9A0  vtable slot 19: const char* object::GetName()
const char* __fastcall object_GetName(object* self, void*) {
    FN_ENTER(object_GetName);
    return self->Name;
}
REPLACE(0x004AA9A0, object_GetName);

// 0x00451F50  vtable slot 12: const radian3& object::GetRotation()
const radian3* __fastcall object_GetRotation(object* self, void*) {
    FN_ENTER(object_GetRotation);
    return &self->Orientation;
}
REPLACE(0x00451F50, object_GetRotation);
