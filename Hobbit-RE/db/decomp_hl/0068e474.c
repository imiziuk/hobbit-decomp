
void FUN_0068e474(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = param_1;
  if (*(byte *)(param_1 + 0x11c) < 8) {
    uVar4 = (uint)*(byte *)(param_1 + 0x11c);
    iVar5 = -uVar4 + 8;
    FUN_0069062a(param_1,uVar4 + 0x20 + param_2,iVar5);
    *(undefined1 *)(iVar2 + 0x11c) = 8;
    iVar5 = FUN_00690691(param_2 + 0x20,uVar4,iVar5);
    if (iVar5 != 0) {
      if ((uVar4 < 4) && (iVar5 = FUN_00690691(param_2 + 0x20,uVar4,-uVar4 + 4), iVar5 != 0)) {
        pcVar6 = "Not a PNG file";
      }
      else {
        pcVar6 = "PNG file corrupted by ASCII conversion";
      }
      FUN_0068e2ef(iVar2,pcVar6);
    }
  }
  piVar1 = (int *)(iVar2 + 0x10c);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_0069062a(iVar2,&param_1,4);
          uVar3 = FUN_006930fe(&param_1);
          FUN_00690731(iVar2);
          FUN_00693134(iVar2,piVar1,4);
          if (*piVar1 != DAT_006fb474) break;
          FUN_00693a96(iVar2,param_2,uVar3);
        }
        if (*piVar1 != DAT_006fb48c) break;
        FUN_00693c8d(iVar2,param_2,uVar3);
      }
      if (*piVar1 != DAT_006fb484) break;
      FUN_00693db6(iVar2,param_2,uVar3);
    }
    if (*piVar1 == DAT_006fb47c) break;
    if (*piVar1 == DAT_006fb494) {
      FUN_00693e00();
    }
    else if (*piVar1 == DAT_006fb49c) {
      FUN_00693f00();
    }
    else if (*piVar1 == DAT_006fb4a4) {
      FUN_00693fef();
    }
    else {
      FUN_00694188(iVar2,param_2,uVar3);
    }
  }
  if ((*(uint *)(iVar2 + 0x58) & 1) == 0) {
    pcVar6 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)(iVar2 + 0x116) != '\x03') || ((*(uint *)(iVar2 + 0x58) & 2) != 0))
    goto LAB_0068e5d9;
    pcVar6 = "Missing PLTE before IDAT";
  }
  FUN_0068e2ef(iVar2,pcVar6);
LAB_0068e5d9:
  *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) | 4;
  *(undefined4 *)(iVar2 + 0xfc) = uVar3;
  return;
}

