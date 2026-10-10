
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052cf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_40 [64];
  
  uVar1 = __ftol();
  iVar2 = FUN_006a2260(uVar1);
  DAT_00763edc = (float)iVar2;
  uVar1 = __ftol();
  iVar2 = FUN_006a22a0(uVar1);
  DAT_00763ee0 = (float)iVar2;
  uVar1 = __ftol();
  iVar2 = FUN_006a2260(uVar1);
  DAT_00763200 = (float)iVar2;
  uVar1 = __ftol();
  iVar2 = FUN_006a22a0(uVar1);
  DAT_00763204 = (float)iVar2;
  FUN_0066c3a0(7,0x37);
  FUN_0066db80(param_1 + 0x518,0);
  uVar4 = 0x80000000;
  uVar1 = FUN_0041b9c0(DAT_006f39e8,_DAT_006f39ec);
  uVar3 = FUN_00401f00(DAT_00763200 + _DAT_006e958c,DAT_00763204 + _DAT_006e958c,0);
  FUN_0066e5a0(uVar3,uVar1,uVar4);
  uVar4 = 0xffffffff;
  uVar1 = FUN_0041b9c0(DAT_006f39e8,_DAT_006f39ec);
  uVar3 = FUN_00401f00(DAT_00763200,DAT_00763204,0);
  FUN_0066e5a0(uVar3,uVar1,uVar4);
  FUN_0066d9a0();
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_NEXT_00732824);
  FUN_00648110(local_40,uVar1);
  FUN_0066c3a0(7,0x37);
  FUN_0066db80(param_1 + 0x4b8,0);
  uVar4 = 0x80000000;
  uVar1 = FUN_0041b9c0(DAT_006f39e8,_DAT_006f39ec);
  uVar3 = FUN_00401f00(DAT_00763edc + _DAT_006e958c,DAT_00763ee0 + _DAT_006e958c,0);
  FUN_0066e5a0(uVar3,uVar1,uVar4);
  uVar4 = 0xffffffff;
  uVar1 = FUN_0041b9c0(DAT_006f39e8,_DAT_006f39ec);
  uVar3 = FUN_00401f00(DAT_00763edc,DAT_00763ee0,0);
  FUN_0066e5a0(uVar3,uVar1,uVar4);
  FUN_0066d9a0();
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_BACK_00732818);
  FUN_00648110(local_40,uVar1);
  return;
}

