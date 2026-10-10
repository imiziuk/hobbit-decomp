
void FUN_00660e80(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  FUN_0064e7d0(s_Reset_D3D_Device_0074f130);
  FUN_0066c130();
  FUN_0067d9ce(DAT_007f1000,DAT_007edae4,&DAT_007edae0);
  FUN_006608d0(DAT_007edb00);
  iVar4 = 0;
  if (0 < DAT_007f00bc) {
    iVar5 = 0;
    do {
      puVar1 = (undefined4 *)(DAT_007f00c0 + iVar5);
      uVar2 = *puVar1;
      pcVar3 = (code *)puVar1[2];
      if ((char)((uint)puVar1[3] >> 8) != '\0') {
        if ((char)puVar1[3] != '\0') {
          FUN_00660cc0(iVar4);
        }
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar2);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < DAT_007f00bc);
  }
  DAT_007f00ec = 0;
  return;
}

