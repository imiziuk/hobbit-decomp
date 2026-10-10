
void __thiscall FUN_00582310(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar2 = (undefined1)((uint)param_2 >> 0x18);
  *(undefined1 *)(param_1 + 0x5b) = uVar2;
  uVar1 = (undefined1)((uint)param_2 >> 0x10);
  *(undefined1 *)(param_1 + 0x5a) = uVar1;
  uVar3 = (undefined1)((uint)param_2 >> 8);
  *(undefined1 *)(param_1 + 0x59) = uVar3;
  *(char *)(param_1 + 0x58) = (char)param_2;
  if (*(int *)(param_1 + 0x5c) == 1) {
    *(undefined1 *)(param_1 + 0x57) = uVar2;
    *(undefined1 *)(param_1 + 0x56) = uVar1;
    *(undefined1 *)(param_1 + 0x55) = uVar3;
    *(char *)(param_1 + 0x54) = (char)param_2;
  }
  return;
}

