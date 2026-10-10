
undefined1 * FUN_006ca959(undefined1 *param_1,ushort param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    return param_1;
  }
  if (DAT_00815f34 == 0) {
    if (param_2 < 0x100) {
      *param_1 = (char)param_2;
      return (undefined1 *)0x1;
    }
  }
  else {
    param_1 = (undefined1 *)0x0;
    puVar1 = (undefined1 *)
             (*(code *)PTR_FUN_0075b2ec)
                       (DAT_00815f44,0x220,&param_2,1,puVar1,DAT_007589d8,0,&param_1);
    if ((puVar1 != (undefined1 *)0x0) && (param_1 == (undefined1 *)0x0)) {
      return puVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_006c5643();
  *puVar2 = 0x2a;
  return (undefined1 *)0xffffffff;
}

