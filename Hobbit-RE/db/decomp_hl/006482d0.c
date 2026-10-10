
int FUN_006482d0(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 == (ushort *)0x0) {
    param_1 = &DAT_0074c280;
  }
  if (param_2 == (ushort *)0x0) {
    param_2 = &DAT_0074c280;
  }
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    if (uVar2 < 0x100) {
      uVar2 = (ushort)(byte)(&DAT_0074c290)[uVar2];
    }
    uVar1 = (uint)*param_2;
    param_2 = param_2 + 1;
    if (uVar1 < 0x100) {
      uVar1 = (uint)(byte)(&DAT_0074c290)[uVar1];
    }
  } while ((uVar2 == (ushort)uVar1) && (uVar2 != 0));
  return uVar2 - uVar1;
}

