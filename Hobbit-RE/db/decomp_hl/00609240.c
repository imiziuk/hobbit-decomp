
undefined4 __thiscall FUN_00609240(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar1 + 0x130) & 1) != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x174);
    uVar3 = *(undefined4 *)(iVar1 + 0x170);
    uVar5 = 0;
    FUN_005afc20(uVar3,uVar4,0);
    FUN_005c7dd0(uVar3,uVar4,uVar5);
    fVar2 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
    *(float *)(param_1 + 0xb8) = (float)fVar2;
    return 8;
  }
  return param_2;
}

