
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005347e0(int param_1)

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
  if ((((0 < local_20) || (0 < local_1c[0])) || (iVar1 != 0)) &&
     (_DAT_006e92f4 < *(float *)(param_1 + 0x270))) {
    FUN_00534f30(2);
  }
  return;
}

