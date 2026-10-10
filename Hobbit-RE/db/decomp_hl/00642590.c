
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00642590(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar4 = (int)param_1;
  iVar10 = 0;
  if (*(int *)((int)param_1 + 0x30c24) == 0) {
    FUN_00648600(*(int *)((int)param_1 + 0x10) * 0x30c + 0x14 + (int)param_1,0,0x30c);
    FUN_00647d10(*(int *)(iVar4 + 0x10) * 0x30c + 0x14 + iVar4,param_2);
    iVar6 = FUN_00647f20(*(int *)(iVar4 + 0x10) * 0x30c + 0x14 + iVar4,&DAT_0074b4f2);
    *(int *)(*(int *)(iVar4 + 0x10) * 0x30c + 0x114 + iVar4) =
         ((iVar6 + *(int *)(iVar4 + 0x10) * -0x30c) - iVar4) + -0x13;
    *(undefined4 *)(*(int *)(iVar4 + 0x10) * 0x30c + 0x118 + iVar4) = 0;
    iVar7 = *(int *)(iVar4 + 0x10) * 0x30c;
    iVar6 = *(int *)(iVar7 + 0x114 + iVar4);
    pcVar12 = (char *)(iVar7 + iVar6 + 0x14 + iVar4);
    cVar3 = *pcVar12;
    while (cVar3 != '\0') {
      if (('@' < cVar3) && (cVar3 < '[')) {
        *pcVar12 = cVar3 + -0x20;
      }
      iVar7 = *(int *)(iVar4 + 0x10) * 0x30c;
      *(int *)(iVar7 + 0x118 + iVar4) = *(int *)(iVar7 + 0x118 + iVar4) + 1;
      iVar6 = iVar6 + 1;
      iVar7 = *(int *)(iVar4 + 0x10) * 0x30c + iVar6;
      pcVar12 = (char *)(iVar7 + 0x14 + iVar4);
      cVar3 = *(char *)(iVar7 + 0x14 + iVar4);
    }
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  }
  iVar6 = *(int *)(iVar4 + 0x30c28) * 0x30c + 0x14 + iVar4;
  *(int *)(iVar4 + 0x30c28) = *(int *)(iVar4 + 0x30c28) + 1;
  if (0 < *(int *)(iVar6 + 0x104)) {
    param_1 = (int *)(iVar6 + 0x208);
    puVar11 = &param_1;
    puVar9 = &param_2;
    do {
      switch(*(undefined1 *)(*(int *)(iVar6 + 0x100) + iVar6 + iVar10)) {
      case 100:
        iVar7 = puVar9[1];
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
        if (iVar7 < 0) {
          param_1[-0x40] = 1;
        }
        uVar5 = FUN_0064f190(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc),&DAT_0074b4f8,iVar7);
        goto LAB_006427ca;
      case 0x66:
        dVar2 = *(double *)(puVar11 + 2);
        if (dVar2 < _DAT_006e92f8 != (NAN(dVar2) || NAN(_DAT_006e92f8))) {
          param_1[-0x40] = 1;
        }
        uStack_4 = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_8 = SUB84(dVar2,0);
        pcVar12 = &DAT_0074b4f4;
        iVar7 = *(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc);
        goto LAB_006427c2;
      case 0x67:
        uStack_4 = puVar11[2];
        local_8 = puVar11[3];
        pcVar12 = s___08X__08X__0074b504;
        iVar7 = *(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc);
LAB_006427c2:
        puVar11 = puVar11 + 2;
        puVar9 = puVar9 + 2;
        uVar5 = FUN_0064f190(iVar7,pcVar12,local_8,uStack_4);
LAB_006427ca:
        *(undefined2 *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 0xc + *(int *)(iVar4 + 0x30c1c)) = uVar5;
        *(undefined2 *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 0xe + *(int *)(iVar4 + 0x30c1c)) = 1;
        break;
      case 0x73:
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
        uVar5 = FUN_0064f190(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc),&DAT_0074b4fc,*puVar1);
        *(undefined2 *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 0xc + *(int *)(iVar4 + 0x30c1c)) = uVar5;
        *(undefined2 *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 0xe + *(int *)(iVar4 + 0x30c1c)) = 0;
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x30c18) * 0x10 + *(int *)(iVar4 + 0x30c1c)) =
           *(undefined4 *)(iVar4 + 0xc);
      *(short *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 8 + *(int *)(iVar4 + 0x30c1c)) =
           *(short *)(iVar4 + 0x30c28) + -1;
      *(int *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 4 + *(int *)(iVar4 + 0x30c1c)) = iVar10;
      iVar10 = iVar10 + 1;
      *(ushort *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 10 + *(int *)(iVar4 + 0x30c1c)) =
           (ushort)(iVar10 != *(int *)(iVar6 + 0x104));
      iVar7 = *(int *)(iVar4 + 0x30c18) * 0x10 + *(int *)(iVar4 + 0x30c1c);
      if ((*(short *)(iVar7 + 0xe) == 0) ||
         (*(char *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc)) == '-')) {
        iVar8 = 0;
      }
      else {
        iVar8 = 1;
      }
      iVar7 = (int)*(short *)(iVar7 + 10) + iVar8 + *(short *)(iVar7 + 0xc);
      if (*param_1 < iVar7) {
        *param_1 = iVar7;
      }
      *(int *)(iVar4 + 0xc) =
           *(int *)(iVar4 + 0xc) +
           (int)*(short *)(*(int *)(iVar4 + 0x30c18) * 0x10 + 0xc + *(int *)(iVar4 + 0x30c1c));
      *(int *)(iVar4 + 0x30c18) = *(int *)(iVar4 + 0x30c18) + 1;
      param_1 = param_1 + 1;
    } while (iVar10 < *(int *)(iVar6 + 0x104));
  }
  return;
}

