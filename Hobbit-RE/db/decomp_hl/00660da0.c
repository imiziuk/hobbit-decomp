
void FUN_00660da0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_007f00ec == '\0') {
    FUN_0064e7d0(s_Lost_D3D_Device_0074f11c);
    DAT_007f1424 = 0;
    FUN_00660a10();
    FUN_0066c340();
    if (DAT_007edae0 != (int *)0x0) {
      (**(code **)(*DAT_007edae0 + 8))(DAT_007edae0);
      DAT_007edae0 = (int *)0x0;
    }
    FUN_00662790();
    iVar4 = 0;
    if (0 < DAT_007f00bc) {
      iVar3 = 0;
      iVar2 = DAT_007f00c0;
      do {
        if ((*(char *)(iVar3 + 0xd + iVar2) != '\0') &&
           (pcVar1 = *(code **)(iVar3 + 4 + iVar2), pcVar1 != (code *)0x0)) {
          (*pcVar1)(*(undefined4 *)(iVar3 + iVar2));
          iVar2 = DAT_007f00c0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < DAT_007f00bc);
    }
    (**(code **)(*DAT_007f1000 + 0x14))(DAT_007f1000,0xffffffff);
    DAT_007f00ec = '\x01';
  }
  else {
    DAT_007f1424 = DAT_007f1424 + 1;
    Sleep(100);
    if ((DAT_007f1424 & DAT_007f1424 - 1) == 0) {
      FUN_0064e7d0(s_Lost_D3D_Device__duplicate__d__0074f0fc,DAT_007f1424);
      return;
    }
  }
  return;
}

