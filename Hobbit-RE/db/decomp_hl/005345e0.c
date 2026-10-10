
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005345e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20;
  int local_1c [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar1 = FUN_005310a0();
  local_1c[3] = 0;
  local_1c[0] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_20 = 0;
  iVar2 = FUN_00534520();
  FUN_005342f0(*(undefined4 *)(param_1 + 0x254),local_1c + 3,local_1c,local_1c + 2,local_1c + 1,
               local_4,&local_20,local_8,local_c);
  if (((local_20 < 1) && (local_1c[0] < 1)) && (iVar2 == 0)) {
    if (*(int *)(param_1 + 0xa8) == 0) goto LAB_00534695;
    uVar3 = 5;
  }
  else {
    if ((*(float *)(param_1 + 0x270) <= _DAT_006e92f4) ||
       (*(float *)(param_1 + 0x300) <= *(float *)(param_1 + 0x2f4))) goto LAB_00534695;
    uVar3 = 2;
  }
  FUN_00534f30(uVar3);
LAB_00534695:
  iVar2 = FUN_00647ed0(uVar1,*(undefined4 *)(param_1 + 0x214));
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x290) = 1;
    *(undefined4 *)(param_1 + 0x240) = 0;
    FUN_00534f30(*(undefined4 *)(param_1 + 0x250));
  }
  return;
}

