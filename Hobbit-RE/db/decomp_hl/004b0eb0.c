
void __thiscall FUN_004b0eb0(int param_1,undefined2 param_2)

{
  *(byte *)(param_1 + 0x16f) = *(byte *)(param_1 + 0x16f) & 0xfb;
  *(undefined2 *)(param_1 + 0x16c) = param_2;
  switch(param_2) {
  case 1:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    *(ushort *)(param_1 + 0x16e) = *(ushort *)(param_1 + 0x16e) & 0xffef;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    *(ushort *)(param_1 + 0x16e) = *(ushort *)(param_1 + 0x16e) & 0xffef | 0x400;
    return;
  }
  return;
}

