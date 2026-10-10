
undefined4 * __thiscall FUN_004354a0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_71c [4];
  undefined1 local_718 [4];
  undefined4 local_714;
  undefined4 local_70c [128];
  undefined1 local_50c [24];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [12];
  undefined1 local_4e4 [16];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b4 [580];
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_264;
  undefined1 local_25c [592];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf746;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  do {
    iVar1 = FUN_00647e40(param_3,(&PTR_DAT_00720fa0)[iVar3]);
    if (iVar1 == 0) {
      FUN_00406a80();
      local_26c = *(undefined4 *)(param_1 + 0x1cc + iVar3 * 4);
      local_4bc = 2;
      *param_2 = 2;
      puVar6 = local_4b4;
      goto LAB_004357ae;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc6);
  iVar3 = 0;
  do {
    FUN_00649920(local_718,s_Quest_List__d_00723130,iVar3);
    local_4 = 0;
    uVar2 = FUN_00649940();
    iVar1 = FUN_00647e40(param_3,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar1 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_270 = *(undefined4 *)(param_1 + 0x104 + iVar3 * 4);
      puVar6 = local_4b4;
      local_4bc = 1;
      *param_2 = 1;
      goto LAB_004357ae;
    }
    FUN_00649920(local_71c,s_Quests_Completed__d_0072311c,iVar3);
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar1 = FUN_00647e40(param_3,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar1 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_714 = 3;
      local_4c0 = *(undefined4 *)(param_1 + 4 + iVar3 * 4);
      *param_2 = 3;
      puVar4 = local_70c;
      puVar5 = param_2 + 2;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00480f60(local_50c);
      FUN_00425250(local_4f4);
      FUN_004357e0(local_4f0);
      FUN_004357e0(local_4e4);
      param_2[0x92] = local_4cc;
      param_2[0x90] = local_4d4;
      param_2[0x91] = local_4d0;
      param_2[0x95] = local_4c0;
      param_2[0x93] = local_4c8;
      param_2[0x94] = local_4c4;
      ExceptionList = local_c;
      return param_2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_264 = 0;
  *param_2 = 0;
  puVar6 = local_25c;
LAB_004357ae:
  FUN_00424770(puVar6);
  ExceptionList = local_c;
  return param_2;
}

