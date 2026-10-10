
void __thiscall FUN_00509d40(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_74;
  int local_70;
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6ce0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065f8a0(&local_74,local_6c);
  iVar6 = param_3 * 0x16;
  iVar3 = FUN_006a22a0(iVar6 + 0x72);
  local_70 = local_74;
  local_64 = FUN_006a22a0(iVar6 + 0x5c);
  local_60 = local_70;
  local_68 = 0;
  if (param_2 < *(int *)(param_1 + 0x178)) {
    local_5c = iVar3;
    FUN_00649920(&param_2,&DAT_007328e4,param_2);
    local_4 = 0;
    uVar4 = FUN_00649940();
    uVar4 = FUN_006ab1a0(s_credits_007328d0,uVar4);
    FUN_0064b0f0(uVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00649950();
    local_68 = local_68 + 1;
    local_60 = local_60 + 1;
    local_64 = local_64 + -1;
    local_5c = local_5c + -1;
    bVar1 = __ftol();
    puVar9 = &param_3;
    uVar8 = 0x12;
    piVar7 = &local_68;
    param_3 = (uint)bVar1 << 0x18;
    uVar4 = local_58;
    uVar5 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar5,piVar7,uVar8,puVar9,uVar4);
    local_68 = local_68 + -1;
    local_60 = local_60 + -1;
    local_64 = local_64 + -1;
    local_5c = local_5c + -1;
    uVar2 = __ftol();
    param_3 = CONCAT13(uVar2,0xff0000);
    param_3 = CONCAT22(param_3._2_2_,0xff00);
    param_3 = CONCAT31(param_3._1_3_,0xff);
    puVar9 = &param_3;
    uVar5 = 0x12;
    piVar7 = &local_68;
    uVar4 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar4,piVar7,uVar5,puVar9,local_58);
    local_4 = 0xffffffff;
    FUN_0064b190();
  }
  ExceptionList = local_c;
  return;
}

