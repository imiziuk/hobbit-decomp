
void __thiscall FUN_00507fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  CRect aCStack_84 [12];
  undefined4 uStack_78;
  char *pcStack_74;
  int iStack_44;
  int *local_30;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6b48;
  local_c = ExceptionList;
  local_2c = 0;
  local_30 = &DAT_00731e90;
  iVar6 = 6;
  puVar7 = (undefined4 *)(param_1 + 0x5d4);
  ExceptionList = &local_c;
  do {
    iVar5 = 0;
    do {
      *puVar7 = 0;
      iStack_44 = 0x508033;
      iVar1 = __ftol();
      iStack_44 = 0x50803f;
      iVar2 = __ftol();
      iStack_44 = 0x50804d;
      iVar3 = __ftol();
      iStack_44 = 0x50805c;
      iVar4 = __ftol();
      iStack_44 = (-(uint)(*local_30 != 0) & 0xffffff01) + 0x100;
      pcStack_74 = s_IDS_NULL_00731f24;
      uStack_78 = 0x50808a;
      FUN_00649b20();
      local_4 = 0xffffffff;
      pcStack_74 = (char *)iVar6;
      CRect::CRect(aCStack_84,iVar5,local_2c,1,1);
      CRect::CRect((CRect *)&stack0xffffff6c,iVar1,iVar2,iVar3,iVar4);
      FUN_006a2cd0(param_2,param_3,puVar7);
      local_30 = local_30 + 1;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 6);
    local_2c = local_2c + 1;
  } while (iVar6 < 0x24);
  ExceptionList = local_c;
  return;
}

