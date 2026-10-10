
void FUN_0068e608(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar3 = param_1;
  if ((*(byte *)(param_1 + 0x5c) & 0x40) == 0) {
    FUN_0069386e(param_1);
  }
  if ((*(char *)(iVar3 + 0x113) != '\0') && ((*(byte *)(iVar3 + 0x60) & 2) != 0)) {
    cVar2 = *(char *)(iVar3 + 0x114);
    if (cVar2 == '\0') {
      if ((*(byte *)(iVar3 + 0xd4) & 7) != 0) {
        bVar7 = param_3 == 0;
LAB_0068e71a:
        if (bVar7) goto LAB_0068e670;
        uVar4 = 0xff;
LAB_0068e725:
        FUN_00693218(iVar3,param_3,uVar4);
LAB_0068e670:
        FUN_006941d2(iVar3);
        return;
      }
    }
    else if (cVar2 == '\x01') {
      if (((*(byte *)(iVar3 + 0xd4) & 7) != 0) || (*(uint *)(iVar3 + 0xb8) < 5)) {
        if (param_3 == 0) goto LAB_0068e670;
        uVar4 = 0xf;
        goto LAB_0068e725;
      }
    }
    else if (cVar2 == '\x02') {
      if (((byte)*(uint *)(iVar3 + 0xd4) & 7) != 4) {
        if (param_3 == 0) goto LAB_0068e670;
        bVar7 = (*(uint *)(iVar3 + 0xd4) & 4) == 0;
        goto LAB_0068e71a;
      }
    }
    else if (cVar2 == '\x03') {
      if (((*(byte *)(iVar3 + 0xd4) & 3) != 0) || (*(uint *)(iVar3 + 0xb8) < 3)) {
        if (param_3 == 0) goto LAB_0068e670;
        uVar4 = 0x33;
        goto LAB_0068e725;
      }
    }
    else if (cVar2 == '\x04') {
      if (((byte)*(uint *)(iVar3 + 0xd4) & 3) != 2) {
        if (param_3 == 0) goto LAB_0068e670;
        bVar7 = (*(uint *)(iVar3 + 0xd4) & 2) == 0;
        goto LAB_0068e71a;
      }
    }
    else if (cVar2 == '\x05') {
      if (((*(byte *)(iVar3 + 0xd4) & 1) != 0) || (*(uint *)(iVar3 + 0xb8) < 2)) {
        if (param_3 == 0) goto LAB_0068e670;
        uVar4 = 0x55;
        goto LAB_0068e725;
      }
    }
    else if ((cVar2 == '\x06') && ((*(byte *)(iVar3 + 0xd4) & 1) == 0)) goto LAB_0068e670;
  }
  if ((*(byte *)(iVar3 + 0x58) & 4) == 0) {
    FUN_0068e2ef(iVar3,"Invalid attempt to read row data");
  }
  *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0xdc);
  *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0xcc);
  do {
    if (*(int *)(iVar3 + 0x68) == 0) {
      if (*(int *)(iVar3 + 0xfc) == 0) {
        do {
          FUN_00693a0a(iVar3,0);
          FUN_0069062a(iVar3,&param_1,4);
          uVar4 = FUN_006930fe(&param_1);
          *(undefined4 *)(iVar3 + 0xfc) = uVar4;
          FUN_00690731(iVar3);
          FUN_00693134(iVar3,(int *)(iVar3 + 0x10c),4);
          if (*(int *)(iVar3 + 0x10c) != DAT_006fb47c) {
            FUN_0068e2ef(iVar3,"Not enough image data");
          }
        } while (*(int *)(iVar3 + 0xfc) == 0);
      }
      *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0xa0);
      *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(iVar3 + 0x9c);
      if (*(uint *)(iVar3 + 0xfc) < *(uint *)(iVar3 + 0xa0)) {
        *(uint *)(iVar3 + 0x68) = *(uint *)(iVar3 + 0xfc);
      }
      FUN_00693134(iVar3,*(undefined4 *)(iVar3 + 0x9c),*(undefined4 *)(iVar3 + 0x68));
      *(int *)(iVar3 + 0xfc) = *(int *)(iVar3 + 0xfc) - *(int *)(iVar3 + 0x68);
    }
    iVar5 = FUN_00692ca9((undefined4 *)(iVar3 + 100),1);
    if (iVar5 == 1) {
      if (((*(int *)(iVar3 + 0x74) != 0) || (*(int *)(iVar3 + 0x68) != 0)) ||
         (*(int *)(iVar3 + 0xfc) != 0)) {
        FUN_0068e2ef(iVar3,"Extra compressed data");
      }
      *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) | 8;
      *(uint *)(iVar3 + 0x5c) = *(uint *)(iVar3 + 0x5c) | 0x20;
      break;
    }
    if (iVar5 != 0) {
      pcVar6 = *(char **)(iVar3 + 0x7c);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "Decompression error";
      }
      FUN_0068e2ef(iVar3,pcVar6);
    }
  } while (*(int *)(iVar3 + 0x74) != 0);
  *(undefined1 *)(iVar3 + 0xfa) = *(undefined1 *)(iVar3 + 0x11a);
  *(undefined1 *)(iVar3 + 0xf9) = *(undefined1 *)(iVar3 + 0x117);
  *(byte *)(iVar3 + 0xfb) = *(byte *)(iVar3 + 0x119);
  *(undefined1 *)(iVar3 + 0xf8) = *(undefined1 *)(iVar3 + 0x116);
  piVar1 = (int *)(iVar3 + 0xf0);
  *piVar1 = *(int *)(iVar3 + 0xd0);
  *(uint *)(iVar3 + 0xf4) = (uint)*(byte *)(iVar3 + 0x119) * *(int *)(iVar3 + 0xd0) + 7 >> 3;
  FUN_006936f5(iVar3,piVar1,*(undefined1 **)(iVar3 + 0xdc) + 1,*(int *)(iVar3 + 0xd8) + 1,
               **(undefined1 **)(iVar3 + 0xdc));
  FUN_006930a8(iVar3,*(undefined4 *)(iVar3 + 0xd8),*(undefined4 *)(iVar3 + 0xdc),
               *(int *)(iVar3 + 200) + 1);
  if (*(int *)(iVar3 + 0x60) != 0) {
    FUN_00690312(iVar3);
  }
  if ((*(char *)(iVar3 + 0x113) == '\0') || ((*(uint *)(iVar3 + 0x60) & 2) == 0)) {
    if (param_2 != 0) {
      FUN_00693218(iVar3,param_2,0xff);
    }
    if (param_3 == 0) goto LAB_0068e986;
    uVar4 = 0xff;
    iVar5 = param_3;
  }
  else {
    if (*(byte *)(iVar3 + 0x114) < 6) {
      FUN_0069342c(piVar1,*(int *)(iVar3 + 0xdc) + 1,*(byte *)(iVar3 + 0x114),
                   *(uint *)(iVar3 + 0x60));
    }
    if (param_3 != 0) {
      FUN_00693218(iVar3,param_3,*(undefined4 *)(&DAT_006fb458 + (uint)*(byte *)(iVar3 + 0x114) * 4)
                  );
    }
    if (param_2 == 0) goto LAB_0068e986;
    uVar4 = *(undefined4 *)(&DAT_006fb43c + (uint)*(byte *)(iVar3 + 0x114) * 4);
    iVar5 = param_2;
  }
  FUN_00693218(iVar3,iVar5,uVar4);
LAB_0068e986:
  FUN_006941d2(iVar3);
  if (*(code **)(iVar3 + 0x16c) != (code *)0x0) {
    (**(code **)(iVar3 + 0x16c))(iVar3,*(undefined4 *)(iVar3 + 0xd4),*(undefined1 *)(iVar3 + 0x114))
    ;
  }
  return;
}

