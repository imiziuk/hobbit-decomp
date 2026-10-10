
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005346e0(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_1c[3] = 0;
  local_1c[0] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_20 = 0;
  iVar1 = FUN_00534520();
  FUN_005342f0(*(undefined4 *)(param_1 + 0x254),local_1c + 3,local_1c,local_1c + 2,local_1c + 1,
               local_4,&local_20,local_8,local_c);
  if (((local_20 < 1) && (local_1c[0] < 1)) && (iVar1 == 0)) {
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_00534f30(5);
      return;
    }
    if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x264)) {
      *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x264);
      FUN_0064a2e0(s_AMBIENTOUTDOOR_00737278);
      FUN_00535810(&DAT_00764560,*(undefined4 *)(param_1 + 0x264),1);
      return;
    }
  }
  else if ((_DAT_006e92f4 < *(float *)(param_1 + 0x270)) &&
          (*(float *)(param_1 + 0x2f4) < *(float *)(param_1 + 0x300))) {
    FUN_00534f30(2);
  }
  return;
}

