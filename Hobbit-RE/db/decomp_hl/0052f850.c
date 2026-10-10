
void FUN_0052f850(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (int)*(short *)(param_1 + 0x8a);
  uVar6 = 1;
  uVar5 = 0x5f;
  iVar1 = FUN_006a22a0(0x5f,iVar2,1);
  fVar3 = (float)iVar1;
  uVar4 = extraout_ECX;
  iVar1 = FUN_006a2260(300,fVar3,extraout_ECX);
  FUN_0041b9c0((float)iVar1,fVar3);
  FUN_004f60b0(uVar4,uVar5,iVar2,uVar6);
  return;
}

