
void __fastcall FUN_004d9890(int param_1)

{
  byte bVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd4) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xd4) | 1;
  }
  *(byte *)(param_1 + 0xd4) = bVar1;
  (**(code **)(*(int *)(param_1 + 0xcc) + 4))(param_1);
  piVar2 = (int *)FUN_00549470(param_1 + 0xa8);
  if (piVar2 != (int *)0x0) {
    FUN_00583ff0(*piVar2 << 2);
  }
  return;
}

