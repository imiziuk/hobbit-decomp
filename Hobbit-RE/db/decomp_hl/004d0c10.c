
uint __thiscall FUN_004d0c10(int param_1,int param_2)

{
  ushort uVar1;
  uint in_EAX;
  
  if (-1 < param_2) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),uVar1);
    if (((param_2 < (int)(uint)uVar1) && (uVar1 != 0)) &&
       (in_EAX = *(uint *)(param_1 + 0xac), in_EAX != 0)) {
      return CONCAT31((int3)(in_EAX >> 8),*(undefined1 *)(in_EAX + param_2));
    }
  }
  return in_EAX & 0xffffff00;
}

