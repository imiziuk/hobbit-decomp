// Reimplementation of Support/Objects/Bilbo/BilboInventory.cpp (item counts, clamped to per-item ranges).
#include "core/hook.h"
#include "meridian/bilbo_inventory.h"

// 0x00434C10  float bilboInventory::GetMaxHealth()
f32 __fastcall Inventory_GetMaxHealth(bilboInventory* self, void*) {
    FN_ENTER(Inventory_GetMaxHealth);
    return self->MaxHealth;
}
REPLACE(0x00434C10, Inventory_GetMaxHealth);

// 0x00434C40  void bilboInventory::SetCount(s32 item, f32 value) — clamps to [Min, Max]
void __fastcall Inventory_SetCount(bilboInventory* self, void*, s32 item, f32 value) {
    FN_ENTER(Inventory_SetCount);
    InvSlot(self, item) = value;
    if (value < self->Range[item].Min) InvSlot(self, item) = self->Range[item].Min;
    if (InvSlot(self, item) > self->Range[item].Max) InvSlot(self, item) = self->Range[item].Max;
}
REPLACE(0x00434C40, Inventory_SetCount);

// 0x00434CA0  float bilboInventory::GetCount(s32 item) — 0 for out-of-range ids
f32 __fastcall Inventory_GetCount(bilboInventory* self, void*, s32 item) {
    FN_ENTER(Inventory_GetCount);
    if (item < INV_MAX_ITEMS && !(static_cast<f32>(item) < 0.0f)) return InvSlot(self, item);
    return 0.0f;
}
REPLACE(0x00434CA0, Inventory_GetCount);

// 0x00434D10  void bilboInventory::Add(s32 item, f32 amount) — clamps to [Min, Max]
void __fastcall Inventory_Add(bilboInventory* self, void*, s32 item, f32 amount) {
    FN_ENTER(Inventory_Add);
    f32 v = InvSlot(self, item) + amount;
    InvSlot(self, item) = v;
    if (self->Range[item].Max < v) {
        InvSlot(self, item) = self->Range[item].Max;
        return;
    }
    if (v < self->Range[item].Min) InvSlot(self, item) = self->Range[item].Min;
}
REPLACE(0x00434D10, Inventory_Add);

// 0x00434DD0  void bilboInventory::Remove(s32 item, f32 amount) — clamps at Min only
void __fastcall Inventory_Remove(bilboInventory* self, void*, s32 item, f32 amount) {
    FN_ENTER(Inventory_Remove);
    f32 v = InvSlot(self, item) - amount;
    InvSlot(self, item) = v;
    if (v < self->Range[item].Min) InvSlot(self, item) = self->Range[item].Min;
}
REPLACE(0x00434DD0, Inventory_Remove);
