
void __fastcall FUN_004857a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fog_volume__RenderCustom_00728d9c);
  local_4 = 0;
  FUN_00488150();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x168) + iVar3);
      *puVar1 = *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x24 + iVar3);
      puVar1[1] = puVar1[10];
      puVar1[2] = puVar1[0xb];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x164));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

