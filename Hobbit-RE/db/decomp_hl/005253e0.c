
void __thiscall FUN_005253e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_006a2880(param_2,param_3);
  if (*(int *)(param_1 + 0x198) != 0) {
    FUN_0066c3a0(7,0x13);
    FUN_0066db80(param_1 + 0x188,0);
    uVar6 = 0xffffffff;
    uVar1 = FUN_0041b9c0(0x43480000,0x43160000);
    uVar5 = 0;
    iVar2 = FUN_006a22a0(0x50,0,uVar1,uVar6);
    fVar4 = (float)iVar2;
    iVar2 = FUN_006a2260(400,fVar4);
    uVar1 = FUN_00401f00((float)iVar2,fVar4,uVar5);
    FUN_0066e5a0(uVar1);
    FUN_0066d9a0();
  }
  iVar2 = FUN_006a0380(*(undefined4 *)(*(int *)(param_1 + 0x170) + 8));
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x170) + 0x10))();
  iStack_18 = *piVar3 + *(int *)(param_1 + 0x44) + -10;
  iStack_c = piVar3[3] + *(int *)(param_1 + 0x48) + 0xb;
  iStack_10 = piVar3[2] + *(int *)(param_1 + 0x44) + 10;
  iStack_14 = piVar3[1] + *(int *)(param_1 + 0x48) + -0xb;
  uStack_8 = *(undefined4 *)(iVar2 + 0x2c);
  uStack_4 = 0;
  FUN_006a1330(&iStack_18);
  return;
}

