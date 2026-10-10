
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f88c0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar2 = param_1;
  FUN_00413480(0xff,200,0x78,0xff);
  uVar1 = __ftol(iVar2,uVar3);
  FUN_004f6b80(*(float *)(param_1 + 0x560) * _DAT_006e936c,
               (*(float *)(param_1 + 0x564) - _DAT_006efa98) + _DAT_006e935c,uVar1,iVar2,uVar3);
  uVar3 = 1;
  uVar1 = extraout_ECX;
  FUN_00413480(0xff,200,0x78,0xff);
  FUN_004f6b80(*(float *)(param_1 + 0x560) * _DAT_006e936c + _DAT_006e99a0,
               (*(float *)(param_1 + 0x564) - _DAT_006efa98) + _DAT_006e935c,0,uVar1,uVar3);
  return;
}

