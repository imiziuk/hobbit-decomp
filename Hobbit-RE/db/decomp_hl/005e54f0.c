
undefined4 * FUN_005e54f0(undefined4 param_1)

{
  undefined4 *extraout_EDX;
  
  FUN_005cc290(param_1);
  *extraout_EDX = &PTR_FUN_006f4ab8;
  extraout_EDX[6] = 1;
  *(undefined1 *)((int)extraout_EDX + 0x1e) = 0;
  *(undefined1 *)((int)extraout_EDX + 0x1d) = 0;
  *(undefined1 *)(extraout_EDX + 7) = 0;
  *(undefined1 *)((int)extraout_EDX + 0x1f) = 0xff;
  extraout_EDX[8] = 0x3fc00000;
  return extraout_EDX;
}

