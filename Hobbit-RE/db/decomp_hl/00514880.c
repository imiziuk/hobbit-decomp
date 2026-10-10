
void FUN_00514880(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(&DAT_00762b10,0);
  uVar5 = 0xffffffff;
  uVar1 = FUN_0041b9c0(0x44200000,0x44000000);
  uVar4 = 0;
  iVar2 = FUN_006a22a0(0x48,0,uVar1,uVar5);
  fVar3 = (float)(iVar2 + 10);
  iVar2 = FUN_006a2260(0,fVar3);
  uVar1 = FUN_00401f00((float)iVar2,fVar3,uVar4);
  FUN_0066e5a0(uVar1);
  FUN_0066d9a0();
  FUN_006a2880(param_1,param_2);
  return;
}

