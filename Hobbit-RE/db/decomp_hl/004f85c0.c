
void __fastcall FUN_004f85c0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0x560);
  local_4 = *(undefined4 *)(param_1 + 0x564);
  local_10 = 0;
  local_c = 0;
  FUN_004f9150(0);
  uVar1 = __ftol();
  uVar2 = extraout_ECX;
  FUN_00413480(*(undefined1 *)(param_1 + 0x822),*(undefined1 *)(param_1 + 0x821),
               *(undefined1 *)(param_1 + 0x820),uVar1);
  FUN_0066b080(&local_10,uVar2);
  return;
}

