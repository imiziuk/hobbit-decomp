// bilboInventory (original source: Support/Objects/Bilbo/BilboInventory.cpp).
// One global instance g_BilboInventory at 0x0075BBE0. Item names: table at 0x00720FA0
// (Hobbit-RE/inventory_items.txt). Bilbo's health is item 4.
#pragma once
#include "meridian/types.h"

enum InventoryItem : s32 {
    INV_NONE = 0,
    INV_COIN = 1,
    INV_STONES = 2,
    INV_HEALTH = 4,
    INV_GREATER_HEALTH = 5,
    INV_VIGOR_HEALTH = 6,
    INV_COURAGE = 9,
    INV_POISONED = 27,
    INV_POISON_TIMER = 28,
    INV_HEALTH_POTION = 48,
    INV_ANTIDOTE = 49,
    INV_STING = 51,
    INV_THE_RING = 52,
    INV_STAFF = 53,
    INV_EXPLOSIVE_STONE = 54,
    INV_FIRE_STONE = 55,
    INV_FREEZE_STONE = 56,
    INV_MAX_ITEMS = 199,
};

struct InvRange { f32 Min, Max; };

struct bilboInventory {
    u8 _unk000[0x1CC];
    f32 Count[INV_MAX_ITEMS - 1];      // +0x1CC  only 198 slots: Count[198] would alias Range[0].Min
    InvRange Range[INV_MAX_ITEMS];      // +0x4E4  {min, max} per item
    u8 _unkB1C[0xB34 - (0x4E4 + INV_MAX_ITEMS * 8)];
    f32 MaxHealth;                      // +0xB34
    u8 _unkB38[0xB60 - 0xB38];
    void* NameHash;                     // +0xB60  {hash, id} pairs, 0x18C buckets
};
CHECK_OFFSET(bilboInventory, Count, 0x1CC);
CHECK_OFFSET(bilboInventory, Range, 0x4E4);
CHECK_OFFSET(bilboInventory, MaxHealth, 0xB34);
CHECK_OFFSET(bilboInventory, NameHash, 0xB60);

// Raw slot access keeping the original's bounds (id < 199, so 198 reads Range[0].Min like the game).
inline f32& InvSlot(bilboInventory* inv, s32 item) {
    return reinterpret_cast<f32*>(reinterpret_cast<u8*>(inv) + 0x1CC)[item];
}

inline bilboInventory* g_BilboInventory() { return reinterpret_cast<bilboInventory*>(0x0075BBE0); }
