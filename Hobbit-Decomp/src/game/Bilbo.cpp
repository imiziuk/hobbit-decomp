// Reimplementation of Support/Objects/Bilbo/Bilbo.cpp (accessors so far).
#include "core/hook.h"
#include "meridian/bilbo_inventory.h"
#include "meridian/object.h"

struct bilbo;  // 0x5F68 bytes; fields accessed by offset until the full layout is written out

using InvGetCount_t = f32(__fastcall*)(bilboInventory*, void*, s32);  // 0x00434CA0

static bilbo*& g_pBilbo = *reinterpret_cast<bilbo**>(0x0075BA3C);  // set in bilbo::bilbo, cleared in ~bilbo

// 0x0041BCB0  xbool Bilbo_Exists()
xbool Bilbo_Exists() {
    FN_ENTER(Bilbo_Exists);
    return g_pBilbo != nullptr;
}
REPLACE(0x0041BCB0, Bilbo_Exists);

// 0x0041BCC0  bilbo* Bilbo_GetPlayer()  — 264 callers in the game
bilbo* Bilbo_GetPlayer() {
    FN_ENTER(Bilbo_GetPlayer);
    return g_pBilbo;
}
REPLACE(0x0041BCC0, Bilbo_GetPlayer);

// 0x0041BCD0  guid Bilbo_GetGuid()  — the player's hard-coded GUID
guid Bilbo_GetGuid() {
    FN_ENTER(Bilbo_GetGuid);
    return 0xABCABCABCABCABC0ull;
}
REPLACE(0x0041BCD0, Bilbo_GetGuid);

// 0x0041B9E0  xbool bilbo::GetFlag4EC1()
xbool __fastcall bilbo_GetFlag4EC1(bilbo* self, void*) {
    FN_ENTER(bilbo_GetFlag4EC1);
    return Field<u8>(self, 0x4EC1) & 1;
}
REPLACE(0x0041B9E0, bilbo_GetFlag4EC1);

// 0x0041FCE0  xbool bilbo::NearestEnemyCloserThan(f32 dist)  (nearest hostile distance at +0x5910)
xbool __fastcall bilbo_NearestEnemyCloserThan(bilbo* self, void*, f32 dist) {
    FN_ENTER(bilbo_NearestEnemyCloserThan);
    return Field<f32>(self, 0x5910) < dist ? 1 : 0;
}
REPLACE(0x0041FCE0, bilbo_NearestEnemyCloserThan);

// 0x00422420  f32 bilbo::GetHealth()  — ignores this, reads inventory item 4
f32 bilbo_GetHealth() {
    FN_ENTER(bilbo_GetHealth);
    return Original<InvGetCount_t>(0x00434CA0)(g_BilboInventory(), nullptr, INV_HEALTH);
}
REPLACE(0x00422420, bilbo_GetHealth);

// 0x00422430 / 0x00422440 / 0x00422450  poison state set by bilbo::OnApplyPain (pain types 15/17)
f32 __fastcall bilbo_GetPoisonStrength(bilbo* self, void*) {
    FN_ENTER(bilbo_GetPoisonStrength);
    return Field<f32>(self, 0x5F38);
}
REPLACE(0x00422430, bilbo_GetPoisonStrength);

f32 __fastcall bilbo_GetPoisonDamage(bilbo* self, void*) {
    FN_ENTER(bilbo_GetPoisonDamage);
    return Field<f32>(self, 0x5F40);
}
REPLACE(0x00422440, bilbo_GetPoisonDamage);

xbool __fastcall bilbo_IsPoisoned(bilbo* self, void*) {
    FN_ENTER(bilbo_IsPoisoned);
    return Field<xbool>(self, 0x5F34);
}
REPLACE(0x00422450, bilbo_IsPoisoned);

// 0x00422460  f32 bilbo::GetVigor()  — inventory item 6
f32 bilbo_GetVigor() {
    FN_ENTER(bilbo_GetVigor);
    return Original<InvGetCount_t>(0x00434CA0)(g_BilboInventory(), nullptr, INV_VIGOR_HEALTH);
}
REPLACE(0x00422460, bilbo_GetVigor);

// 0x00422470  s32 bilbo::GetWeapon()  0 Sting, 1 Staff, 2 none, 3 Stones
enum BilboWeapon { WEAPON_STING = 0, WEAPON_STAFF = 1, WEAPON_NONE = 2, WEAPON_STONES = 3 };
s32 __fastcall bilbo_GetWeapon(bilbo* self, void*) {
    FN_ENTER(bilbo_GetWeapon);
    if (Field<xbool>(self, 0x3B0)) return WEAPON_STONES;  // m_bUsingStone
    if (Field<xbool>(self, 0x3C0)) return WEAPON_STING;   // m_bUsingSting
    return Field<xbool>(self, 0x3D0) == 0 ? WEAPON_NONE : WEAPON_STAFF;  // m_bUsingStaff
}
REPLACE(0x00422470, bilbo_GetWeapon);

// 0x00422FB0  f32 bilbo::GetYaw()  (bilbo orientation radian3 at +0x470)
f32 __fastcall bilbo_GetYaw(bilbo* self, void*) {
    FN_ENTER(bilbo_GetYaw);
    return Field<f32>(self, 0x474);
}
REPLACE(0x00422FB0, bilbo_GetYaw);

// 0x00423C80  xbool bilbo::IsRingEquipped()
xbool __fastcall bilbo_IsRingEquipped(bilbo* self, void*) {
    FN_ENTER(bilbo_IsRingEquipped);
    return Field<xbool>(self, 0x420);
}
REPLACE(0x00423C80, bilbo_IsRingEquipped);

// 0x00424BA0  xbool bilbo::HasF434()
xbool __fastcall bilbo_HasF434(bilbo* self, void*) {
    FN_ENTER(bilbo_HasF434);
    return Field<f32>(self, 0x434) > 0.0f ? 1 : 0;
}
REPLACE(0x00424BA0, bilbo_HasF434);
