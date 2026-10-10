
void __fastcall FUN_00555da0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  iVar1 = DAT_0075cf1c;
  if ((DAT_00771d38 & 1) == 0) {
    DAT_00771d38 = DAT_00771d38 | 1;
    FUN_006bfe55(&DAT_00555e90);
  }
  uVar4 = DAT_00771c2a;
  uVar3 = DAT_00771c29;
  uVar2 = DAT_00771c28;
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xf4) == 2)) {
    *(undefined1 *)(iVar1 + 0xbb) = DAT_00771c2b;
    *(undefined1 *)(iVar1 + 0xba) = uVar4;
    *(undefined1 *)(iVar1 + 0xb9) = uVar3;
    *(undefined1 *)(iVar1 + 0xb8) = uVar2;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 6;
  }
  else {
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
  }
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xf4) == 2)) {
    DAT_00771c2b = *(undefined1 *)(iVar1 + 0xbb);
    DAT_00771c2a = *(undefined1 *)(iVar1 + 0xba);
    DAT_00771c29 = *(undefined1 *)(iVar1 + 0xb9);
    DAT_00771c28 = *(undefined1 *)(iVar1 + 0xb8);
    *(undefined1 *)(iVar1 + 0xbb) = 0xff;
    *(undefined1 *)(iVar1 + 0xba) = 0;
    *(undefined1 *)(iVar1 + 0xb9) = 0;
    *(undefined1 *)(iVar1 + 0xb8) = 0;
  }
  return;
}

