
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00608c80(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  param_1[0x10] = 1 - param_1[0x10];
  piStack_28 = (int *)0x608ca4;
  piStack_24 = param_1 + 0x11;
  iVar1 = FUN_00549470();
  if (iVar1 == 0) {
    return;
  }
  piStack_24 = (int *)0x22;
  if (*param_1 == 0) {
    piStack_24 = (int *)0x26;
  }
  piStack_28 = (int *)0x7;
  piStack_2c = (int *)0x608cc5;
  FUN_0066c3a0();
  piStack_24 = (int *)0x1;
  piStack_28 = (int *)0x1b;
  piStack_2c = DAT_007f1000;
  (**(code **)(*DAT_007f1000 + 200))();
  if (*param_1 == 0) {
    uVar3 = 5;
  }
  else {
    if (*param_1 != 1) goto LAB_00608d0c;
    uVar3 = 2;
  }
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,uVar3);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
LAB_00608d0c:
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
  FUN_0066dc10(iVar1,1,1);
  FUN_00549580(param_1 + 0x11);
  piStack_2c = (int *)((float)param_1[0xe] * _DAT_006e936c);
  iVar1 = 0;
  piStack_28 = piStack_2c;
  if (0 < param_1[0xf]) {
    iVar2 = 0;
    do {
      FUN_0066e5a0(param_1[0xd] + iVar2,&piStack_2c);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < param_1[0xf]);
  }
  FUN_0066d9a0();
  return;
}

