
void __fastcall FUN_00590190(int param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  undefined4 local_264;
  int local_260;
  uint local_25c;
  undefined4 auStack_258 [2];
  undefined1 auStack_250 [512];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0xbc) = 1;
  FUN_00659ce0();
  FUN_00650010(s______RESTORESTATE___BEGIN______00742618);
  local_264 = FUN_00650210();
  FUN_005c6fd0();
  FUN_005c5ec0();
  local_26c = 0;
  if (0 < DAT_0076f660) {
    local_278 = 0;
    do {
      iVar7 = *(int *)(local_278 + DAT_0076f648);
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x7f) & 0x22) == 0)) {
        iVar6 = *(int *)(iVar7 + 8);
        iVar3 = *(int *)(iVar7 + 0xc);
        iVar4 = FUN_0041bcc0();
        if ((iVar6 != *(int *)(iVar4 + 8)) || (iVar3 != *(int *)(iVar4 + 0xc))) {
          FUN_0054be30(*(undefined4 *)(iVar7 + 8),*(undefined4 *)(iVar7 + 0xc));
        }
      }
      local_26c = local_26c + 1;
      local_278 = local_278 + 0x14;
    } while (local_26c < DAT_0076f660);
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      FUN_0054baf0(*(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar7 * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar7 * 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4 + iVar7 * 8),0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x88));
  }
  iVar7 = param_1 + 100;
  FUN_0063cb10(0);
  FUN_005c7870(iVar7);
  FUN_0055bc20(iVar7);
  FUN_0055b420();
  local_274 = 0;
  local_270 = 0;
  FUN_0063ccd0(&local_274,0x40);
  if (local_274 != 0 || local_270 != 0) {
    do {
      FUN_0063cea0(&local_268);
      FUN_0063cea0(&local_260);
      puVar1 = (ushort *)(*(int *)(param_1 + 0x54) + local_260 * 4);
      piVar5 = (int *)FUN_00406bf0(local_274,local_270);
      if (piVar5 == (int *)0x0) {
        FUN_0058fdf0(local_274,local_270,puVar1,local_268);
      }
      else {
        local_25c = (*(byte *)((int)piVar5 + 0x7f) & 0x10) >> 4;
        if (local_25c == 0) {
          (**(code **)(*piVar5 + 0xc4))();
        }
        (**(code **)(*piVar5 + 0xc))();
        local_26c = 0;
        if (puVar1[1] != 0) {
          do {
            iVar6 = ((uint)*puVar1 + local_26c) * 2;
            uVar2 = *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x38));
            uStack_50 = 0x7f7fffff;
            uStack_4c = 0x7f7fffff;
            uStack_48 = 0x7f7fffff;
            uStack_44 = 0xff7fffff;
            uStack_40 = 0xff7fffff;
            uStack_3c = 0xff7fffff;
            switch(*(undefined2 *)(iVar6 + *(int *)(param_1 + 0x1c))) {
            case 1:
            case 0xc:
              auStack_258[0] = 1;
              FUN_0063cea0(auStack_c);
              break;
            case 2:
            case 10:
              auStack_258[0] = 2;
              FUN_0063d070(auStack_8);
              break;
            case 3:
              auStack_258[0] = 3;
              uStack_4 = FUN_0063d990();
              break;
            case 4:
            case 6:
            case 7:
            case 0xd:
            case 0xe:
              auStack_258[0] = 4;
              FUN_0063d790(auStack_250);
              break;
            default:
              goto switchD_005903e2_caseD_5;
            case 8:
              auStack_258[0] = 8;
              FUN_0063d440(auStack_34);
              break;
            case 9:
              auStack_258[0] = 9;
              FUN_0063d440(&uStack_50);
              FUN_0063d440(&uStack_44);
              break;
            case 0xb:
              auStack_258[0] = 0xb;
              FUN_0063d590(auStack_28);
              break;
            case 0xf:
            case 0x10:
              auStack_258[0] = 0xf;
              FUN_0063ccd0(auStack_18,0x40);
              break;
            case 0x11:
              auStack_258[0] = 0x11;
              FUN_0063d1a0(auStack_38);
            }
            puVar9 = auStack_258;
            uVar8 = FUN_0058ef30(uVar2);
            (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xb4))((int)uVar8,puVar9);
switchD_005903e2_caseD_5:
            local_26c = local_26c + 1;
          } while (local_26c < (int)(uint)puVar1[1]);
        }
        if (local_25c == 0) {
          (**(code **)(*piVar5 + 200))();
        }
      }
      FUN_0063ccd0(&local_274,0x40);
    } while (local_274 != 0 || local_270 != 0);
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_00552ea0(iVar7);
  (**(code **)(*DAT_0075fc00 + 0x20))(iVar7);
  FUN_00650010(s______RESTORESTATE___END______007425f8);
  FUN_0064e870(7,s_____________RESTORE______________007425d4);
  iVar7 = FUN_00650210();
  FUN_0064e870(7,s_____MEMMGR_USAGE____d_bytes_007423d0,local_268 - iVar7);
  FUN_0064e870(7,s__________________________________0071ec68);
  return;
}

