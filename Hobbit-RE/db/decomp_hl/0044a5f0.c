
void __fastcall FUN_0044a5f0(int param_1)

{
  float fVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_4;
  
  if ((*(int *)(param_1 + 0x3a50) != 0 || *(int *)(param_1 + 0x3a54) != 0) &&
     (*(int *)(param_1 + 0x4658) != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x4658)) {
      iVar4 = param_1 + 0x3a58;
      iVar2 = param_1;
      do {
        uVar5 = 0;
        FUN_00406b70(0xff00ff00);
        FUN_00669ca0(iVar4,iVar4 + 0xc,iVar2,uVar5);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
        iVar2 = extraout_ECX;
      } while (iVar3 < *(int *)(param_1 + 0x4658));
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x4658)) {
      iVar4 = param_1 + 0x3a58;
      do {
        FUN_0066a810(iVar4,0xffffffff);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x4658));
    }
    FUN_0066a810(param_1 + 0x3a4c + *(int *)(param_1 + 0x4658) * 0x18,0xffffffff);
    fVar1 = *(float *)(param_1 + 0x4660);
    iVar3 = param_1 + *(int *)(param_1 + 0x465c) * 0x18;
    fStack_4 = *(float *)(iVar3 + 0x3a6c) - *(float *)(iVar3 + 0x3a60);
    fStack_10 = fStack_4 * fVar1 + *(float *)(iVar3 + 0x3a60);
    fStack_14 = (*(float *)(iVar3 + 0x3a68) - *(float *)(iVar3 + 0x3a5c)) * fVar1 +
                *(float *)(iVar3 + 0x3a5c);
    fStack_18 = (*(float *)(param_1 + 0x3a64 + *(int *)(param_1 + 0x465c) * 0x18) -
                *(float *)(iVar3 + 0x3a58)) * fVar1 + *(float *)(iVar3 + 0x3a58);
    FUN_0066a810(&fStack_18,0xffff0000);
  }
  return;
}

