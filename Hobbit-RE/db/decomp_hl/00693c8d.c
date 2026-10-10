
void FUN_00693c8d(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  iVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 & 1) == 0) {
    pcVar6 = "Missing IHDR before PLTE";
LAB_00693cb9:
    FUN_0068e2ef(param_1,pcVar6);
LAB_00693cc1:
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 2;
    if (param_3 % 3 != 0) {
      pcVar6 = "Invalid palette chunk";
      if (*(char *)(param_1 + 0x116) != '\x03') goto LAB_00693ce1;
      FUN_0068e2ef(param_1,"Invalid palette chunk");
    }
    iVar3 = (int)param_3 / 3;
    iVar4 = FUN_006906d9(param_1,iVar3,3);
    *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 0x10;
    if (0 < iVar3) {
      puVar5 = (undefined1 *)(iVar4 + 2);
      param_1 = iVar3;
      do {
        FUN_00693134(iVar2,&param_3,3);
        puVar5[-2] = (undefined1)param_3;
        puVar5[-1] = param_3._1_1_;
        *puVar5 = param_3._2_1_;
        puVar5 = puVar5 + 3;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    FUN_00693a0a(iVar2,0);
    *(int *)(iVar2 + 0x104) = iVar4;
    *(short *)(iVar2 + 0x108) = (short)iVar3;
    FUN_0069056b(iVar2,param_2,iVar4,iVar3);
    if ((((*(char *)(iVar2 + 0x116) == '\x03') && (param_2 != 0)) &&
        ((*(byte *)(param_2 + 8) & 0x10) != 0)) &&
       (*(ushort *)(iVar2 + 0x108) < *(ushort *)(iVar2 + 0x10a))) {
      FUN_0068e312(iVar2,"Truncating incorrect tRNS chunk length");
      *(ushort *)(iVar2 + 0x10a) = *(ushort *)(iVar2 + 0x108);
    }
  }
  else {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) != 0) {
        pcVar6 = "Duplicate PLTE chunk";
        goto LAB_00693cb9;
      }
      goto LAB_00693cc1;
    }
    pcVar6 = "Invalid PLTE after IDAT";
LAB_00693ce1:
    FUN_0068e312(param_1,pcVar6);
    FUN_00693a0a(param_1,param_3);
  }
  return;
}

