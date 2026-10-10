
void __fastcall FUN_00534a30(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar1 = FUN_00534520();
  FUN_005342f0(*(undefined4 *)(param_1 + 0x254),&local_10,&local_14,&local_18,&local_1c,local_4,
               &local_20,local_8,local_c);
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00534f30(5);
    return;
  }
  if (iVar1 != 0) {
    FUN_00534f30(3);
    return;
  }
  fVar2 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c));
  if (fVar2 < (float10)*(float *)(param_1 + 0x270) !=
      (NAN(fVar2) || NAN((float10)*(float *)(param_1 + 0x270)))) {
    FUN_00534f30(*(undefined4 *)(param_1 + 0x298));
  }
  return;
}

