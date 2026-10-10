
int __thiscall FUN_00553810(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_00649600(s_material_mgr__GetMaterial_0073d3ac);
  uVar1 = *(uint *)(param_1 + 0x58);
  iVar2 = *(int *)(*(int *)(param_1 + 100) + 8 +
                  ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18);
  FUN_00649720();
  return (uVar1 & param_2) * 0xa04 + iVar2;
}

