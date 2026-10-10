
void __thiscall FUN_00497e30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3320;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e30f0(param_2);
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_Updated_00729e54);
    *(undefined4 *)(iVar2 + 0x84) = 8;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,s_Teleport_Object_00729e44);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 5;
        FUN_00647d10(iVar2,s_LoadObjects_00729e38);
        *(undefined4 *)(iVar2 + 0x84) = 0x15;
        *(undefined4 *)(iVar2 + 0x100) = 0;
        if (DAT_0075d338 == 0) {
          iVar2 = FUN_00425010();
          *(undefined4 *)(iVar2 + 0x80) = 1;
          FUN_00647d10(iVar2,s_LoadObjects_Layer_List_Count_00729e18);
          *(undefined4 *)(iVar2 + 0x84) = 0;
          *(undefined4 *)(iVar2 + 0xf0) = 0;
          *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
        }
      }
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    do {
      FUN_00649920(local_10,s_LoadObjects_Layer__d_00729e00,iVar2);
      local_4 = 0;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 6;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x100) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x108));
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,s_UnloadObjects_00729df0);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 1;
      FUN_00647d10(iVar2,s_UnloadObjects_Layer_List_Count_00729dd0);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    do {
      FUN_00649920(local_10,s_UnloadObjects_Layer__d_00729db8,iVar2);
      local_4 = 1;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 6;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x100) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x124));
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,s_LoadResources_00729da8);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 1;
      FUN_00647d10(iVar2,s_LoadResources_Layer_List_Count_00729d88);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      FUN_00649920(local_10,s_LoadResources_Layer__d_00729d70,iVar2);
      local_4 = 2;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 6;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x100) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  FUN_00474220(uVar1,s_UnloadResources_00729d60,0,0);
  FUN_00499e60(uVar1,s_UnloadResources_Layer_List_Count_00729d3c,0,0,0xffffffff);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    do {
      FUN_00649920(&param_2,s_UnloadResources_Layer__d_00729d20,iVar2);
      local_4 = 3;
      uVar4 = FUN_00649940(1,0);
      FUN_00499ec0(uVar1,uVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x16c));
  }
  ExceptionList = local_c;
  return;
}

