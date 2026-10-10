
void __fastcall thunk_FUN_00589de0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x20c);
  iVar1 = 0x80;
  do {
    FUN_0064ff40(*puVar2,s_C__projects_meridian_Support_Spa_00741e98,0x4b);
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  iVar1 = 0;
  do {
    FUN_0064ff40(*(undefined4 *)(param_1 + iVar1 * 4),s_C__projects_meridian_Support_Spa_00741e98,
                 0x53);
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x80);
  *(undefined2 *)(param_1 + 0x414) = 0xffff;
  *(undefined2 *)(param_1 + 0x208) = 0xffff;
  return;
}

