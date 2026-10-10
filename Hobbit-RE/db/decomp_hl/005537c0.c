
undefined4 __thiscall FUN_005537c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  FUN_00649600(s_material_mgr__GetMaterialType_0073d38c);
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 100) + 8 +
                    ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x104 +
           (*(uint *)(param_1 + 0x58) & param_2) * 0xa04);
  FUN_00649720();
  return uVar1;
}

