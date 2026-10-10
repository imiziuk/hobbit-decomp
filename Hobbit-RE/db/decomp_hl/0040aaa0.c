
void __fastcall FUN_0040aaa0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004021c0(param_1[0x1e],param_1[0x1f]);
  if (iVar1 != 0) {
    iVar1 = FUN_004de6d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004de640();
      if (iVar1 != 0) {
        iVar1 = FUN_004dd290(0);
        if (iVar1 == 0x8e) {
          FUN_0064e7d0(s_Removed_Bilbo_s_Treasury_Key_Mol_0071dffc);
          param_1[1] = 3;
          uVar3 = 0x8e;
LAB_0040ab4b:
          FUN_00434db0(uVar3);
        }
        else {
          if (iVar1 == 0x8f) {
            FUN_0064e7d0(s_Removed_Bilbo_s_Throne_Key_1_Mol_0071dfd8);
            param_1[1] = 1;
            uVar3 = 0x8f;
            goto LAB_0040ab4b;
          }
          if (iVar1 == 0x90) {
            FUN_0064e7d0(s_Removed_Bilbo_s_Throne_Key_2_Mol_0071dfb4);
            param_1[1] = 2;
            uVar3 = 0x90;
            goto LAB_0040ab4b;
          }
        }
        FUN_00659600(s_EnemyBladeImpactEnemyBlade_0071df98,1);
        param_1[2] = 1;
        FUN_0040b050();
      }
    }
  }
  iVar1 = FUN_004021c0(param_1[0x20],param_1[0x21]);
  if (iVar1 == 0) goto LAB_0040ac5b;
  iVar1 = FUN_004de6d0();
  if (iVar1 == 0) goto LAB_0040ac5b;
  iVar1 = FUN_004de640();
  if (iVar1 == 0) goto LAB_0040ac5b;
  if (param_1[2] == 1) {
    iVar1 = param_1[1];
    if (iVar1 == 1) {
      FUN_00434cf0(0x8f);
    }
    else if (iVar1 == 2) {
      FUN_00434cf0(0x90);
    }
    else if (iVar1 == 3) {
      FUN_00434cf0(0x8e);
    }
  }
  else if (param_1[2] == 3) {
    iVar1 = param_1[1];
    if (iVar1 == 1) {
      uVar3 = 0x92;
LAB_0040ac2b:
      FUN_00434cf0(uVar3);
    }
    else {
      if (iVar1 == 2) {
        uVar3 = 0x93;
        goto LAB_0040ac2b;
      }
      if (iVar1 == 3) {
        uVar3 = 0x91;
        goto LAB_0040ac2b;
      }
    }
    FUN_00659600(s_QuestItemPickup_0071df88,1);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_0040b050();
LAB_0040ac5b:
  iVar1 = FUN_004021c0(param_1[0x18],param_1[0x19]);
  if (iVar1 != 0) {
    iVar1 = FUN_004de640();
    if (iVar1 != 0) {
      if (*param_1 == 0) {
        FUN_0040adb0();
      }
      else if (*param_1 == 4) {
        FUN_0040af40();
      }
    }
  }
  if (param_1[5] == 0) {
    iVar1 = FUN_004021c0(param_1[0x10],param_1[0x11]);
    iVar2 = FUN_004021c0(param_1[0xe],param_1[0xf]);
    if (iVar1 != 0) {
      iVar1 = FUN_004de640();
      if ((iVar1 != 0) && (iVar2 != 0)) {
        iVar1 = FUN_004c7410();
        if (iVar1 != 0) {
          FUN_0040ad90(1);
        }
      }
    }
  }
  iVar2 = FUN_0040afd0();
  iVar1 = *param_1;
  if (iVar2 != iVar1) {
    if (iVar2 == 2) {
      FUN_0040aea0();
      *param_1 = 2;
      return;
    }
    if (iVar2 == 3) {
      FUN_0040aef0();
      *param_1 = 3;
      return;
    }
    if (iVar2 == 1) {
      if (iVar1 == 2) {
        FUN_00429100();
        *param_1 = 1;
        return;
      }
      if (iVar1 == 3) {
        FUN_00429100();
      }
    }
    *param_1 = iVar2;
  }
  return;
}

