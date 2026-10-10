
void FUN_00693fef(int param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_c [2];
  undefined1 local_a [2];
  undefined1 local_8 [4];
  
  if ((*(uint *)(param_1 + 0x58) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x58) & 4) == 0) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x10) == 0)) goto LAB_00694011;
      pcVar5 = "Duplicate tRNS chunk";
    }
    else {
      pcVar5 = "Invalid tRNS after IDAT";
    }
    goto LAB_00694171;
  }
  FUN_0068e2ef(param_1,"Missing IHDR before tRNS");
LAB_00694011:
  cVar1 = *(char *)(param_1 + 0x116);
  if (cVar1 == '\x03') {
    if ((*(byte *)(param_1 + 0x58) & 2) == 0) {
      FUN_0068e312(param_1,"Missing PLTE before tRNS");
LAB_00694035:
      if (param_3 != 0) {
        uVar3 = FUN_00693059(param_1,param_3);
        *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 0x20;
        *(undefined4 *)(param_1 + 0x15c) = uVar3;
        FUN_00693134(param_1,uVar3,param_3);
        *(short *)(param_1 + 0x10a) = (short)param_3;
        goto LAB_0069413d;
      }
      FUN_0068e312(param_1,"Zero length tRNS chunk");
    }
    else {
      if (param_3 <= *(ushort *)(param_1 + 0x108)) goto LAB_00694035;
      FUN_0068e312(param_1,"Incorrect tRNS chunk length");
    }
LAB_0069417a:
    FUN_00693a0a(param_1,param_3);
  }
  else {
    if (cVar1 == '\x02') {
      if (param_3 != 6) {
LAB_0069410e:
        pcVar5 = "Incorrect tRNS chunk length";
LAB_00694171:
        FUN_0068e312(param_1,pcVar5);
        goto LAB_0069417a;
      }
      FUN_00693134(param_1,local_c,6);
      *(undefined2 *)(param_1 + 0x10a) = 1;
      uVar2 = FUN_00693121(local_c);
      *(undefined2 *)(param_1 + 0x162) = uVar2;
      uVar2 = FUN_00693121(local_a);
      *(undefined2 *)(param_1 + 0x164) = uVar2;
      uVar2 = FUN_00693121(local_8);
      *(undefined2 *)(param_1 + 0x166) = uVar2;
    }
    else {
      if (cVar1 != '\0') {
        pcVar5 = "tRNS chunk not allowed with alpha channel";
        goto LAB_00694171;
      }
      if (param_3 != 2) goto LAB_0069410e;
      FUN_00693134(param_1,local_c,2);
      *(undefined2 *)(param_1 + 0x10a) = 1;
      uVar2 = FUN_00693121(local_c);
      *(undefined2 *)(param_1 + 0x168) = uVar2;
    }
LAB_0069413d:
    iVar4 = FUN_00693a0a(param_1,0);
    if (iVar4 == 0) {
      FUN_006905e3(param_1,param_2,*(undefined4 *)(param_1 + 0x15c),*(undefined2 *)(param_1 + 0x10a)
                   ,param_1 + 0x160);
    }
  }
  return;
}

