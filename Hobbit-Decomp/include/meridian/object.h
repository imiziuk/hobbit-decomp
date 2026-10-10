// object: base class of every game object (original source: Support/Objects/Object.cpp).
// Field names come from object::OnExport (0x004AA650), which writes them by name.
#pragma once
#include "meridian/types.h"

struct object {
    void** vtable;            // +0x00  61 virtual slots (0x006EDE98)
    u8 _unk04[0x04];
    guid Guid;                // +0x08
    u32 Flags10;              // +0x10  0x4000000 = makes splashes
    vector3 Position;         // +0x14  write only via Move (vtable slot 5)
    vector3 InitialPos;       // +0x20
    bbox LocalBBox;           // +0x2C
    bbox WorldBBox;           // +0x44  rebuilt by Move
    u8 _unk5C[0x68 - 0x5C];
    radian3 Orientation;      // +0x68
    u32 ScriptResource;       // +0x74  resource handle
    u8 _unk78[0x7A - 0x78];
    u16 ObjectFlags;          // +0x7A  bit0 named, bit3 vf37/38 flag
    u8 TypeId;                // +0x7C  class registry code (0x12 bilbo, 0x1C NPC, ...)
    s8 SpatialLayer;          // +0x7D
    u8 LightChannels;         // +0x7E
    u8 ExtraFlags;            // +0x7F  bit0 ObjSaveFlag, bit4 (0x10) loaded/valid
    u8 _unk80[0xA0 - 0x80];
    char* Name;               // +0xA0  "NONAME" default
};
CHECK_OFFSET(object, Guid, 0x08);
CHECK_OFFSET(object, Position, 0x14);
CHECK_OFFSET(object, InitialPos, 0x20);
CHECK_OFFSET(object, LocalBBox, 0x2C);
CHECK_OFFSET(object, WorldBBox, 0x44);
CHECK_OFFSET(object, Orientation, 0x68);
CHECK_OFFSET(object, ObjectFlags, 0x7A);
CHECK_OFFSET(object, TypeId, 0x7C);
CHECK_OFFSET(object, ExtraFlags, 0x7F);
CHECK_OFFSET(object, Name, 0xA0);

// Typed access to fields of classes whose full layout isn't written out yet.
template <typename T>
inline T& Field(void* self, u32 offset) { return *reinterpret_cast<T*>(reinterpret_cast<u8*>(self) + offset); }
