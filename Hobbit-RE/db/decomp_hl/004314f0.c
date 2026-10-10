
void __fastcall FUN_004314f0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa50),*(undefined4 *)(param_1 + 0xa54));
  pfVar2 = (float *)(**(code **)(*piVar1 + 0x28))();
  fVar4 = (float10)FUN_0064ca10(*pfVar2 - *(float *)(param_1 + 0x14),
                                pfVar2[2] - *(float *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x7ac) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x7b0) = 0x3f490fdb;
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar7 = 0x3e800000;
  uVar6 = 1;
  uVar5 = 0;
  uVar3 = FUN_0053cc70(s_PICKUP_00720f08);
  FUN_00540840(uVar3,uVar5,uVar6,uVar7);
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  FUN_00442550(1);
  FUN_00659600(s_BilboEffortGrunt_00720ef4,1);
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xa50),*(undefined4 *)(param_1 + 0xa54));
  (**(code **)(*piVar1 + 0x8c))(1,0xffffffff);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x3d8);
  uVar5 = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x3d0);
  uVar6 = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3b8) = uVar5;
  *(undefined4 *)(param_1 + 0x3bc) = uVar6;
  return;
}

