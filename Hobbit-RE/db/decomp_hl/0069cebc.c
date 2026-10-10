
void FUN_0069cebc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar6;
  undefined6 uVar7;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined8 uVar8;
  short sVar12;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined8 uVar13;
  undefined8 uVar14;
  short sVar18;
  short sVar20;
  undefined2 uVar21;
  undefined4 uVar19;
  short sVar22;
  short sVar23;
  undefined2 uVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  short sVar35;
  ushort uVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  ushort uVar44;
  undefined8 uVar45;
  short sVar46;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined8 uVar47;
  
  uVar13 = param_1[0xc];
  uVar45 = param_3[0xc];
  sVar5 = (short)uVar13 * (short)uVar45;
  sVar9 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar10 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar11 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[4];
  uVar45 = param_3[4];
  sVar12 = (short)uVar13 * (short)uVar45;
  sVar15 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar16 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar17 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = *param_1;
  uVar45 = *param_3;
  sVar25 = (short)uVar13 * (short)uVar45;
  sVar27 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar29 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar31 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[8];
  uVar45 = param_3[8];
  sVar35 = (short)uVar13 * (short)uVar45;
  sVar37 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar38 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar40 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  sVar18 = sVar12 + sVar5;
  sVar20 = sVar15 + sVar9;
  sVar22 = sVar16 + sVar10;
  sVar23 = sVar17 + sVar11;
  uVar13 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_006fcc00 >> 0x10),sVar15 - sVar9)
                            ,CONCAT22((short)(undefined4)DAT_006fcc00,sVar12 - sVar5)),DAT_006fcbe0)
  ;
  uVar45 = pmaddwd(CONCAT26((short)((uint)DAT_006fcc00._4_4_ >> 0x10),
                            CONCAT24(sVar17 - sVar11,
                                     CONCAT22((short)DAT_006fcc00._4_4_,sVar16 - sVar10))),
                   DAT_006fcbe0);
  sVar26 = sVar25 + sVar35;
  sVar28 = sVar27 + sVar37;
  sVar30 = sVar29 + sVar38;
  sVar32 = sVar31 + sVar40;
  sVar25 = sVar25 - sVar35;
  sVar27 = sVar27 - sVar37;
  sVar29 = sVar29 - sVar38;
  sVar31 = sVar31 - sVar40;
  uVar13 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  sVar5 = (short)uVar13 - sVar18;
  sVar9 = (short)((ulonglong)uVar13 >> 0x10) - sVar20;
  sVar10 = (short)((ulonglong)uVar13 >> 0x20) - sVar22;
  sVar11 = (short)((ulonglong)uVar13 >> 0x30) - sVar23;
  param_2[4] = CONCAT26(sVar32 + sVar23,
                        CONCAT24(sVar30 + sVar22,CONCAT22(sVar28 + sVar20,sVar26 + sVar18)));
  param_2[0xc] = CONCAT26(sVar11 + sVar31,
                          CONCAT24(sVar10 + sVar29,CONCAT22(sVar9 + sVar27,sVar5 + sVar25)));
  sVar26 = sVar26 - sVar18;
  sVar28 = sVar28 - sVar20;
  sVar30 = sVar30 - sVar22;
  sVar32 = sVar32 - sVar23;
  *param_2 = CONCAT26(sVar31 - sVar11,
                      CONCAT24(sVar29 - sVar10,CONCAT22(sVar27 - sVar9,sVar25 - sVar5)));
  uVar13 = param_1[10];
  uVar45 = param_3[10];
  sVar18 = (short)uVar13 * (short)uVar45;
  sVar20 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar22 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar23 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[6];
  uVar45 = param_3[6];
  sVar5 = (short)uVar13 * (short)uVar45;
  sVar10 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar12 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar16 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[2];
  uVar45 = param_3[2];
  sVar9 = (short)uVar13 * (short)uVar45;
  sVar11 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar15 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar17 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  sVar35 = sVar18 - sVar5;
  sVar37 = sVar20 - sVar10;
  sVar38 = sVar22 - sVar12;
  sVar40 = sVar23 - sVar16;
  uVar13 = param_1[0xe];
  uVar45 = param_3[0xe];
  sVar25 = (short)uVar13 * (short)uVar45;
  sVar27 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar29 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar31 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  sVar18 = sVar18 + sVar5;
  sVar20 = sVar20 + sVar10;
  sVar22 = sVar22 + sVar12;
  sVar23 = sVar23 + sVar16;
  uVar49 = (undefined2)((uint)(undefined4)DAT_006fcc00 >> 0x10);
  uVar48 = (undefined2)(undefined4)DAT_006fcc00;
  uVar45 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar37),CONCAT22(uVar48,sVar35)),DAT_006fcbe8);
  sVar5 = sVar9 + sVar25;
  sVar10 = sVar11 + sVar27;
  sVar12 = sVar15 + sVar29;
  sVar16 = sVar17 + sVar31;
  uVar21 = (undefined2)DAT_006fcc00._4_4_;
  uVar24 = (undefined2)((uint)DAT_006fcc00._4_4_ >> 0x10);
  sVar9 = sVar9 - sVar25;
  sVar11 = sVar11 - sVar27;
  sVar15 = sVar15 - sVar29;
  sVar17 = sVar17 - sVar31;
  uVar13 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar40,CONCAT22(uVar21,sVar38))),DAT_006fcbe8);
  uVar47 = packssdw(CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  uVar13 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar11),CONCAT22(uVar48,sVar9)),DAT_006fcbf0);
  uVar45 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar17,CONCAT22(uVar21,sVar15))),DAT_006fcbf0);
  uVar8 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                   CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  uVar45 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar37 + sVar11),CONCAT22(uVar48,sVar35 + sVar9)),
                   DAT_006fcbf8);
  sVar25 = sVar5 + sVar18;
  sVar27 = sVar10 + sVar20;
  sVar29 = sVar12 + sVar22;
  sVar31 = sVar16 + sVar23;
  uVar13 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar40 + sVar17,CONCAT22(uVar21,sVar38 + sVar15))),
                   DAT_006fcbf8);
  uVar34 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar10 - sVar20),CONCAT22(uVar48,sVar5 - sVar18)),
                   DAT_006fcbe0);
  uVar14 = packssdw(CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  uVar45 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar16 - sVar23,CONCAT22(uVar21,sVar12 - sVar22))),
                   DAT_006fcbe0);
  sVar9 = (short)((ulonglong)uVar14 >> 0x10);
  sVar10 = (short)((ulonglong)uVar14 >> 0x20);
  sVar11 = (short)((ulonglong)uVar14 >> 0x30);
  uVar13 = param_2[4];
  uVar34 = packssdw(CONCAT44((int)((longlong)uVar34 >> 0x28),(int)uVar34 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  sVar12 = ((short)uVar14 + (short)uVar47) - sVar25;
  sVar15 = (sVar9 + (short)((ulonglong)uVar47 >> 0x10)) - sVar27;
  sVar16 = (sVar10 + (short)((ulonglong)uVar47 >> 0x20)) - sVar29;
  sVar17 = (sVar11 + (short)((ulonglong)uVar47 >> 0x30)) - sVar31;
  uVar45 = param_2[0xc];
  sVar18 = (short)uVar34 - sVar12;
  sVar20 = (short)((ulonglong)uVar34 >> 0x10) - sVar15;
  sVar22 = (short)((ulonglong)uVar34 >> 0x20) - sVar16;
  sVar23 = (short)((ulonglong)uVar34 >> 0x30) - sVar17;
  sVar5 = ((short)uVar8 - (short)uVar14) + sVar18;
  sVar9 = ((short)((ulonglong)uVar8 >> 0x10) - sVar9) + sVar20;
  sVar10 = ((short)((ulonglong)uVar8 >> 0x20) - sVar10) + sVar22;
  sVar11 = ((short)((ulonglong)uVar8 >> 0x30) - sVar11) + sVar23;
  param_2[8] = CONCAT26(sVar32 + sVar11,
                        CONCAT24(sVar30 + sVar10,CONCAT22(sVar28 + sVar9,sVar26 + sVar5)));
  sVar35 = (short)((ulonglong)uVar13 >> 0x10);
  sVar37 = (short)((ulonglong)uVar13 >> 0x20);
  sVar38 = (short)((ulonglong)uVar13 >> 0x30);
  param_2[6] = CONCAT26(sVar32 - sVar11,
                        CONCAT24(sVar30 - sVar10,CONCAT22(sVar28 - sVar9,sVar26 - sVar5)));
  uVar8 = *param_2;
  *param_2 = CONCAT26(sVar38 + sVar31,
                      CONCAT24(sVar37 + sVar29,CONCAT22(sVar35 + sVar27,(short)uVar13 + sVar25)));
  sVar5 = (short)((ulonglong)uVar45 >> 0x10);
  sVar9 = (short)((ulonglong)uVar45 >> 0x20);
  sVar10 = (short)((ulonglong)uVar45 >> 0x30);
  param_2[0xe] = CONCAT26(sVar38 - sVar31,
                          CONCAT24(sVar37 - sVar29,CONCAT22(sVar35 - sVar27,(short)uVar13 - sVar25))
                         );
  param_2[2] = CONCAT26(sVar10 + sVar17,
                        CONCAT24(sVar9 + sVar16,CONCAT22(sVar5 + sVar15,(short)uVar45 + sVar12)));
  param_2[0xc] = CONCAT26(sVar10 - sVar17,
                          CONCAT24(sVar9 - sVar16,CONCAT22(sVar5 - sVar15,(short)uVar45 - sVar12)));
  sVar12 = (short)((ulonglong)uVar8 >> 0x10);
  sVar15 = (short)((ulonglong)uVar8 >> 0x20);
  sVar16 = (short)((ulonglong)uVar8 >> 0x30);
  uVar13 = param_1[5];
  uVar45 = param_3[5];
  sVar5 = (short)uVar13 * (short)uVar45;
  sVar9 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar10 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar11 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  param_2[4] = CONCAT26(sVar16 + sVar23,
                        CONCAT24(sVar15 + sVar22,CONCAT22(sVar12 + sVar20,(short)uVar8 + sVar18)));
  param_2[10] = CONCAT26(sVar16 - sVar23,
                         CONCAT24(sVar15 - sVar22,CONCAT22(sVar12 - sVar20,(short)uVar8 - sVar18)));
  uVar13 = param_1[0xd];
  uVar45 = param_3[0xd];
  sVar12 = (short)uVar13 * (short)uVar45;
  sVar16 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar26 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar28 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[1];
  uVar45 = param_3[1];
  sVar25 = (short)uVar13 * (short)uVar45;
  sVar27 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar29 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar31 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[9];
  uVar45 = param_3[9];
  sVar15 = (short)uVar13 * (short)uVar45;
  sVar17 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar35 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar37 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  sVar18 = sVar5 + sVar12;
  sVar20 = sVar9 + sVar16;
  sVar22 = sVar10 + sVar26;
  sVar23 = sVar11 + sVar28;
  uVar8 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_006fcc00 >> 0x10),sVar9 - sVar16),
                           CONCAT22((short)(undefined4)DAT_006fcc00,sVar5 - sVar12)),DAT_006fcbe0);
  uVar13 = param_1[0xb];
  uVar14 = pmaddwd(CONCAT26((short)((uint)DAT_006fcc00._4_4_ >> 0x10),
                            CONCAT24(sVar11 - sVar28,
                                     CONCAT22((short)DAT_006fcc00._4_4_,sVar10 - sVar26))),
                   DAT_006fcbe0);
  uVar45 = param_3[0xb];
  sVar5 = (short)uVar13 * (short)uVar45;
  sVar10 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar12 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar16 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = packssdw(CONCAT44((int)((longlong)uVar8 >> 0x28),(int)uVar8 >> 8),
                    CONCAT44((int)((longlong)uVar14 >> 0x28),(int)uVar14 >> 8));
  sVar26 = sVar25 + sVar15;
  sVar28 = sVar27 + sVar17;
  sVar30 = sVar29 + sVar35;
  sVar32 = sVar31 + sVar37;
  sVar25 = sVar25 - sVar15;
  sVar27 = sVar27 - sVar17;
  sVar29 = sVar29 - sVar35;
  sVar31 = sVar31 - sVar37;
  sVar9 = (short)uVar13 - sVar18;
  sVar11 = (short)((ulonglong)uVar13 >> 0x10) - sVar20;
  sVar15 = (short)((ulonglong)uVar13 >> 0x20) - sVar22;
  sVar17 = (short)((ulonglong)uVar13 >> 0x30) - sVar23;
  uVar13 = param_1[7];
  param_2[5] = CONCAT26(sVar32 + sVar23,
                        CONCAT24(sVar30 + sVar22,CONCAT22(sVar28 + sVar20,sVar26 + sVar18)));
  uVar45 = param_3[7];
  sVar35 = (short)uVar13 * (short)uVar45;
  sVar37 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar38 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar40 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  sVar26 = sVar26 - sVar18;
  sVar28 = sVar28 - sVar20;
  sVar30 = sVar30 - sVar22;
  sVar32 = sVar32 - sVar23;
  param_2[0xd] = CONCAT26(sVar31 + sVar17,
                          CONCAT24(sVar29 + sVar15,CONCAT22(sVar27 + sVar11,sVar25 + sVar9)));
  param_2[9] = CONCAT26(sVar31 - sVar17,
                        CONCAT24(sVar29 - sVar15,CONCAT22(sVar27 - sVar11,sVar25 - sVar9)));
  sVar9 = sVar5 + sVar35;
  sVar11 = sVar10 + sVar37;
  sVar15 = sVar12 + sVar38;
  sVar17 = sVar16 + sVar40;
  uVar13 = param_1[0xf];
  sVar5 = sVar5 - sVar35;
  sVar10 = sVar10 - sVar37;
  sVar12 = sVar12 - sVar38;
  sVar16 = sVar16 - sVar40;
  uVar45 = param_3[0xf];
  sVar18 = (short)uVar13 * (short)uVar45;
  sVar20 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar22 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar23 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  uVar13 = param_1[3];
  uVar45 = param_3[3];
  sVar25 = (short)uVar13 * (short)uVar45;
  sVar29 = (short)((ulonglong)uVar13 >> 0x10) * (short)((ulonglong)uVar45 >> 0x10);
  sVar35 = (short)((ulonglong)uVar13 >> 0x20) * (short)((ulonglong)uVar45 >> 0x20);
  sVar41 = (short)((ulonglong)uVar13 >> 0x30) * (short)((ulonglong)uVar45 >> 0x30);
  sVar27 = sVar25 + sVar18;
  sVar31 = sVar29 + sVar20;
  sVar40 = sVar35 + sVar22;
  sVar42 = sVar41 + sVar23;
  uVar24 = (undefined2)((uint)(undefined4)DAT_006fcc00 >> 0x10);
  uVar21 = (undefined2)(undefined4)DAT_006fcc00;
  sVar25 = sVar25 - sVar18;
  sVar29 = sVar29 - sVar20;
  sVar35 = sVar35 - sVar22;
  sVar41 = sVar41 - sVar23;
  uVar13 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar10),CONCAT22(uVar21,sVar5)),DAT_006fcbe8);
  uVar48 = (undefined2)DAT_006fcc00._4_4_;
  uVar49 = (undefined2)((uint)DAT_006fcc00._4_4_ >> 0x10);
  sVar37 = sVar27 + sVar9;
  sVar38 = sVar31 + sVar11;
  sVar39 = sVar40 + sVar15;
  sVar43 = sVar42 + sVar17;
  uVar45 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar16,CONCAT22(uVar48,sVar12))),DAT_006fcbe8);
  uVar45 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  uVar8 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar31 - sVar11),CONCAT22(uVar21,sVar27 - sVar9)),
                  DAT_006fcbe0);
  uVar13 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar42 - sVar17,CONCAT22(uVar48,sVar40 - sVar15))),
                   DAT_006fcbe0);
  uVar14 = packssdw(CONCAT44((int)((longlong)uVar8 >> 0x28),(int)uVar8 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  uVar13 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar10 + sVar29),CONCAT22(uVar21,sVar5 + sVar25)),
                   DAT_006fcbf8);
  uVar8 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar16 + sVar41,CONCAT22(uVar48,sVar12 + sVar35))),
                  DAT_006fcbf8);
  uVar8 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                   CONCAT44((int)((longlong)uVar8 >> 0x28),(int)uVar8 >> 8));
  uVar34 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar29),CONCAT22(uVar21,sVar25)),DAT_006fcbf0);
  uVar13 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar41,CONCAT22(uVar48,sVar35))),DAT_006fcbf0);
  uVar34 = packssdw(CONCAT44((int)((longlong)uVar34 >> 0x28),(int)uVar34 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  uVar13 = param_2[5];
  sVar9 = (short)((ulonglong)uVar8 >> 0x10);
  sVar11 = (short)((ulonglong)uVar8 >> 0x20);
  sVar15 = (short)((ulonglong)uVar8 >> 0x30);
  sVar16 = ((short)uVar8 + (short)uVar45) - sVar37;
  sVar17 = (sVar9 + (short)((ulonglong)uVar45 >> 0x10)) - sVar38;
  sVar20 = (sVar11 + (short)((ulonglong)uVar45 >> 0x20)) - sVar39;
  sVar23 = (sVar15 + (short)((ulonglong)uVar45 >> 0x30)) - sVar43;
  sVar27 = (short)uVar14 - sVar16;
  sVar29 = (short)((ulonglong)uVar14 >> 0x10) - sVar17;
  sVar31 = (short)((ulonglong)uVar14 >> 0x20) - sVar20;
  sVar35 = (short)((ulonglong)uVar14 >> 0x30) - sVar23;
  sVar5 = (short)((ulonglong)uVar13 >> 0x10);
  sVar10 = (short)((ulonglong)uVar13 >> 0x20);
  sVar12 = (short)((ulonglong)uVar13 >> 0x30);
  uVar45 = param_2[0xd];
  sVar40 = ((short)uVar34 - (short)uVar8) + sVar27;
  sVar41 = ((short)((ulonglong)uVar34 >> 0x10) - sVar9) + sVar29;
  sVar42 = ((short)((ulonglong)uVar34 >> 0x20) - sVar11) + sVar31;
  sVar46 = ((short)((ulonglong)uVar34 >> 0x30) - sVar15) + sVar35;
  param_2[1] = CONCAT26(sVar12 + sVar43,
                        CONCAT24(sVar10 + sVar39,CONCAT22(sVar5 + sVar38,(short)uVar13 + sVar37)));
  uVar8 = param_2[9];
  param_2[7] = CONCAT26(sVar32 - sVar46,
                        CONCAT24(sVar30 - sVar42,CONCAT22(sVar28 - sVar41,sVar26 - sVar40)));
  sVar18 = (short)((ulonglong)uVar45 >> 0x10);
  sVar22 = (short)((ulonglong)uVar45 >> 0x20);
  sVar25 = (short)((ulonglong)uVar45 >> 0x30);
  param_2[3] = CONCAT26(sVar25 + sVar23,
                        CONCAT24(sVar22 + sVar20,CONCAT22(sVar18 + sVar17,(short)uVar45 + sVar16)));
  sVar9 = (short)((ulonglong)uVar8 >> 0x10);
  sVar11 = (short)((ulonglong)uVar8 >> 0x20);
  sVar15 = (short)((ulonglong)uVar8 >> 0x30);
  param_2[5] = CONCAT26(sVar15 + sVar35,
                        CONCAT24(sVar11 + sVar31,CONCAT22(sVar9 + sVar29,(short)uVar8 + sVar27)));
  uVar6 = CONCAT22(sVar11 - sVar31,sVar30 + sVar42);
  uVar14 = *param_2;
  uVar34 = param_2[2];
  uVar19 = CONCAT22(sVar10 - sVar39,sVar22 - sVar20);
  param_2[9] = CONCAT44(CONCAT22((short)uVar13 - sVar37,(short)uVar45 - sVar16),
                        CONCAT22((short)uVar8 - sVar27,sVar26 + sVar40));
  param_2[0xb] = CONCAT44(CONCAT22(sVar5 - sVar38,sVar18 - sVar17),
                          CONCAT22(sVar9 - sVar29,sVar28 + sVar41));
  param_2[0xd] = CONCAT44(uVar19,uVar6);
  param_2[0xf] = CONCAT44((int)(CONCAT26(sVar12 - sVar43,CONCAT24(sVar25 - sVar23,uVar19)) >> 0x20),
                          (int)(CONCAT26(sVar15 - sVar35,CONCAT24(sVar32 + sVar46,uVar6)) >> 0x20));
  uVar19 = CONCAT22((short)((ulonglong)uVar34 >> 0x20),(short)((ulonglong)uVar14 >> 0x20));
  uVar13 = param_2[4];
  uVar45 = param_2[6];
  uVar6 = CONCAT22((short)((ulonglong)uVar45 >> 0x20),(short)((ulonglong)uVar13 >> 0x20));
  *param_2 = CONCAT44(CONCAT22((short)uVar45,(short)uVar13),CONCAT22((short)uVar34,(short)uVar14));
  param_2[2] = CONCAT44(CONCAT22((short)((ulonglong)uVar45 >> 0x10),
                                 (short)((ulonglong)uVar13 >> 0x10)),
                        CONCAT22((short)((ulonglong)uVar34 >> 0x10),
                                 (short)((ulonglong)uVar14 >> 0x10)));
  param_2[4] = CONCAT44(uVar6,uVar19);
  param_2[6] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar45 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar13 >> 0x30),uVar6)) >> 0x20),
                        (int)(CONCAT26((short)((ulonglong)uVar34 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar14 >> 0x30),uVar19)) >> 0x20)
                       );
  uVar13 = param_2[1];
  uVar45 = param_2[3];
  uVar8 = param_2[5];
  uVar19 = CONCAT22((short)((ulonglong)uVar45 >> 0x20),(short)((ulonglong)uVar13 >> 0x20));
  uVar14 = param_2[7];
  uVar33 = CONCAT22((short)((ulonglong)uVar14 >> 0x20),(short)((ulonglong)uVar8 >> 0x20));
  uVar34 = param_2[8];
  param_2[8] = CONCAT44(CONCAT22((short)uVar14,(short)uVar8),CONCAT22((short)uVar45,(short)uVar13));
  uVar47 = param_2[10];
  param_2[10] = CONCAT44(CONCAT22((short)((ulonglong)uVar14 >> 0x10),
                                  (short)((ulonglong)uVar8 >> 0x10)),
                         CONCAT22((short)((ulonglong)uVar45 >> 0x10),
                                  (short)((ulonglong)uVar13 >> 0x10)));
  uVar1 = param_2[0xc];
  uVar6 = CONCAT22((short)((ulonglong)uVar47 >> 0x20),(short)((ulonglong)uVar34 >> 0x20));
  uVar2 = param_2[0xe];
  param_2[0xc] = CONCAT44(uVar33,uVar19);
  param_2[0xe] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar14 >> 0x30),
                                         CONCAT24((short)((ulonglong)uVar8 >> 0x30),uVar33)) >> 0x20
                               ),(int)(CONCAT26((short)((ulonglong)uVar45 >> 0x30),
                                                CONCAT24((short)((ulonglong)uVar13 >> 0x30),uVar19))
                                      >> 0x20));
  uVar19 = CONCAT22((short)((ulonglong)uVar2 >> 0x20),(short)((ulonglong)uVar1 >> 0x20));
  param_2[1] = CONCAT44(CONCAT22((short)uVar2,(short)uVar1),CONCAT22((short)uVar47,(short)uVar34));
  param_2[3] = CONCAT44(CONCAT22((short)((ulonglong)uVar2 >> 0x10),(short)((ulonglong)uVar1 >> 0x10)
                                ),
                        CONCAT22((short)((ulonglong)uVar47 >> 0x10),
                                 (short)((ulonglong)uVar34 >> 0x10)));
  param_2[5] = CONCAT44(uVar19,uVar6);
  param_2[7] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar2 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar1 >> 0x30),uVar19)) >> 0x20),
                        (int)(CONCAT26((short)((ulonglong)uVar47 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar34 >> 0x30),uVar6)) >> 0x20))
  ;
  uVar13 = param_2[0xc];
  uVar45 = param_2[4];
  uVar8 = *param_2;
  uVar14 = param_2[8];
  sVar5 = (short)((ulonglong)uVar13 >> 0x10);
  sVar11 = (short)((ulonglong)uVar45 >> 0x10);
  sVar9 = (short)((ulonglong)uVar13 >> 0x20);
  sVar12 = (short)((ulonglong)uVar45 >> 0x20);
  sVar15 = (short)((ulonglong)uVar45 >> 0x30);
  sVar10 = (short)((ulonglong)uVar13 >> 0x30);
  sVar16 = (short)uVar45 + (short)uVar13;
  sVar17 = sVar11 + sVar5;
  sVar18 = sVar12 + sVar9;
  sVar20 = sVar15 + sVar10;
  uVar13 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_006fcc00 >> 0x10),sVar11 - sVar5)
                            ,CONCAT22((short)(undefined4)DAT_006fcc00,(short)uVar45 - (short)uVar13)
                           ),DAT_006fcbe0);
  uVar45 = pmaddwd(CONCAT26((short)((uint)DAT_006fcc00._4_4_ >> 0x10),
                            CONCAT24(sVar15 - sVar10,
                                     CONCAT22((short)DAT_006fcc00._4_4_,sVar12 - sVar9))),
                   DAT_006fcbe0);
  uVar13 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  sVar22 = (short)uVar8 + (short)uVar14;
  sVar12 = (short)((ulonglong)uVar8 >> 0x10);
  sVar5 = (short)((ulonglong)uVar14 >> 0x10);
  sVar23 = sVar12 + sVar5;
  sVar15 = (short)((ulonglong)uVar8 >> 0x20);
  sVar26 = (short)((ulonglong)uVar8 >> 0x30);
  sVar9 = (short)((ulonglong)uVar14 >> 0x20);
  sVar25 = sVar15 + sVar9;
  sVar10 = (short)((ulonglong)uVar14 >> 0x30);
  sVar27 = sVar26 + sVar10;
  sVar28 = (short)uVar8 - (short)uVar14;
  sVar12 = sVar12 - sVar5;
  sVar15 = sVar15 - sVar9;
  sVar26 = sVar26 - sVar10;
  sVar5 = (short)uVar13 - sVar16;
  sVar9 = (short)((ulonglong)uVar13 >> 0x10) - sVar17;
  sVar10 = (short)((ulonglong)uVar13 >> 0x20) - sVar18;
  sVar11 = (short)((ulonglong)uVar13 >> 0x30) - sVar20;
  param_2[4] = CONCAT26(sVar27 + sVar20,
                        CONCAT24(sVar25 + sVar18,CONCAT22(sVar23 + sVar17,sVar22 + sVar16)));
  param_2[0xc] = CONCAT26(sVar11 + sVar26,
                          CONCAT24(sVar10 + sVar15,CONCAT22(sVar9 + sVar12,sVar5 + sVar28)));
  sVar22 = sVar22 - sVar16;
  sVar23 = sVar23 - sVar17;
  sVar25 = sVar25 - sVar18;
  sVar27 = sVar27 - sVar20;
  *param_2 = CONCAT26(sVar26 - sVar11,
                      CONCAT24(sVar15 - sVar10,CONCAT22(sVar12 - sVar9,sVar28 - sVar5)));
  uVar13 = param_2[10];
  uVar45 = param_2[6];
  uVar8 = param_2[2];
  sVar17 = (short)uVar13 - (short)uVar45;
  sVar5 = (short)((ulonglong)uVar45 >> 0x10);
  sVar20 = (short)((ulonglong)uVar13 >> 0x10);
  sVar39 = sVar20 - sVar5;
  sVar9 = (short)((ulonglong)uVar45 >> 0x20);
  sVar26 = (short)((ulonglong)uVar13 >> 0x20);
  sVar28 = (short)((ulonglong)uVar13 >> 0x30);
  sVar41 = sVar26 - sVar9;
  sVar10 = (short)((ulonglong)uVar45 >> 0x30);
  sVar42 = sVar28 - sVar10;
  uVar14 = param_2[0xe];
  sVar18 = (short)uVar13 + (short)uVar45;
  sVar20 = sVar20 + sVar5;
  sVar26 = sVar26 + sVar9;
  sVar28 = sVar28 + sVar10;
  uVar49 = (undefined2)((uint)(undefined4)DAT_006fcc00 >> 0x10);
  uVar48 = (undefined2)(undefined4)DAT_006fcc00;
  uVar45 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar39),CONCAT22(uVar48,sVar17)),DAT_006fcbe8);
  uVar21 = (undefined2)DAT_006fcc00._4_4_;
  uVar24 = (undefined2)((uint)DAT_006fcc00._4_4_ >> 0x10);
  uVar13 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar42,CONCAT22(uVar21,sVar41))),DAT_006fcbe8);
  uVar34 = packssdw(CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  sVar29 = (short)uVar8 + (short)uVar14;
  sVar12 = (short)((ulonglong)uVar14 >> 0x10);
  sVar9 = (short)((ulonglong)uVar8 >> 0x10);
  sVar31 = sVar9 + sVar12;
  sVar15 = (short)((ulonglong)uVar14 >> 0x20);
  sVar10 = (short)((ulonglong)uVar8 >> 0x20);
  sVar11 = (short)((ulonglong)uVar8 >> 0x30);
  sVar35 = sVar10 + sVar15;
  sVar16 = (short)((ulonglong)uVar14 >> 0x30);
  sVar38 = sVar11 + sVar16;
  sVar5 = (short)uVar8 - (short)uVar14;
  sVar9 = sVar9 - sVar12;
  sVar10 = sVar10 - sVar15;
  sVar11 = sVar11 - sVar16;
  uVar13 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar9),CONCAT22(uVar48,sVar5)),DAT_006fcbf0);
  uVar45 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar11,CONCAT22(uVar21,sVar10))),DAT_006fcbf0);
  uVar8 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                   CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  sVar30 = sVar29 + sVar18;
  sVar32 = sVar31 + sVar20;
  sVar37 = sVar35 + sVar26;
  sVar40 = sVar38 + sVar28;
  uVar13 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar39 + sVar9),CONCAT22(uVar48,sVar17 + sVar5)),
                   DAT_006fcbf8);
  uVar45 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar42 + sVar11,CONCAT22(uVar21,sVar41 + sVar10))),
                   DAT_006fcbf8);
  uVar14 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  sVar9 = (short)((ulonglong)uVar14 >> 0x10);
  sVar10 = (short)((ulonglong)uVar14 >> 0x20);
  sVar11 = (short)((ulonglong)uVar14 >> 0x30);
  sVar12 = ((short)uVar14 + (short)uVar34) - sVar30;
  sVar15 = (sVar9 + (short)((ulonglong)uVar34 >> 0x10)) - sVar32;
  sVar16 = (sVar10 + (short)((ulonglong)uVar34 >> 0x20)) - sVar37;
  sVar17 = (sVar11 + (short)((ulonglong)uVar34 >> 0x30)) - sVar40;
  uVar47 = pmaddwd(CONCAT44(CONCAT22(uVar49,sVar31 - sVar20),CONCAT22(uVar48,sVar29 - sVar18)),
                   DAT_006fcbe0);
  uVar34 = pmaddwd(CONCAT26(uVar24,CONCAT24(sVar38 - sVar28,CONCAT22(uVar21,sVar35 - sVar26))),
                   DAT_006fcbe0);
  uVar13 = param_2[0xc];
  uVar45 = param_2[4];
  uVar34 = packssdw(CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8),
                    CONCAT44((int)((longlong)uVar34 >> 0x28),(int)uVar34 >> 8));
  sVar18 = (short)uVar34 - sVar12;
  sVar20 = (short)((ulonglong)uVar34 >> 0x10) - sVar15;
  sVar26 = (short)((ulonglong)uVar34 >> 0x20) - sVar16;
  sVar28 = (short)((ulonglong)uVar34 >> 0x30) - sVar17;
  sVar5 = ((short)uVar8 - (short)uVar14) + sVar18;
  sVar9 = ((short)((ulonglong)uVar8 >> 0x10) - sVar9) + sVar20;
  sVar10 = ((short)((ulonglong)uVar8 >> 0x20) - sVar10) + sVar26;
  sVar11 = ((short)((ulonglong)uVar8 >> 0x30) - sVar11) + sVar28;
  param_2[8] = CONCAT26(sVar27 + sVar11,
                        CONCAT24(sVar25 + sVar10,CONCAT22(sVar23 + sVar9,sVar22 + sVar5)));
  sVar29 = (short)((ulonglong)uVar45 >> 0x10);
  sVar31 = (short)((ulonglong)uVar45 >> 0x20);
  sVar35 = (short)((ulonglong)uVar45 >> 0x30);
  param_2[6] = CONCAT26(sVar27 - sVar11,
                        CONCAT24(sVar25 - sVar10,CONCAT22(sVar23 - sVar9,sVar22 - sVar5)));
  uVar8 = *param_2;
  *param_2 = CONCAT26(sVar35 + sVar40,
                      CONCAT24(sVar31 + sVar37,CONCAT22(sVar29 + sVar32,(short)uVar45 + sVar30)));
  sVar5 = (short)((ulonglong)uVar13 >> 0x10);
  sVar9 = (short)((ulonglong)uVar13 >> 0x20);
  sVar10 = (short)((ulonglong)uVar13 >> 0x30);
  param_2[0xe] = CONCAT26(sVar35 - sVar40,
                          CONCAT24(sVar31 - sVar37,CONCAT22(sVar29 - sVar32,(short)uVar45 - sVar30))
                         );
  param_2[2] = CONCAT26(sVar10 + sVar17,
                        CONCAT24(sVar9 + sVar16,CONCAT22(sVar5 + sVar15,(short)uVar13 + sVar12)));
  param_2[0xc] = CONCAT26(sVar10 - sVar17,
                          CONCAT24(sVar9 - sVar16,CONCAT22(sVar5 - sVar15,(short)uVar13 - sVar12)));
  sVar5 = (short)((ulonglong)uVar8 >> 0x10);
  sVar9 = (short)((ulonglong)uVar8 >> 0x20);
  sVar10 = (short)((ulonglong)uVar8 >> 0x30);
  uVar13 = param_2[5];
  param_2[4] = CONCAT26(sVar10 + sVar28,
                        CONCAT24(sVar9 + sVar26,CONCAT22(sVar5 + sVar20,(short)uVar8 + sVar18)));
  param_2[10] = CONCAT26(sVar10 - sVar28,
                         CONCAT24(sVar9 - sVar26,CONCAT22(sVar5 - sVar20,(short)uVar8 - sVar18)));
  uVar45 = param_2[0xd];
  uVar8 = param_2[1];
  sVar5 = (short)((ulonglong)uVar13 >> 0x10);
  sVar11 = (short)((ulonglong)uVar45 >> 0x10);
  sVar9 = (short)((ulonglong)uVar13 >> 0x20);
  sVar10 = (short)((ulonglong)uVar13 >> 0x30);
  sVar18 = (short)((ulonglong)uVar45 >> 0x20);
  sVar20 = (short)((ulonglong)uVar45 >> 0x30);
  uVar14 = param_2[9];
  sVar12 = (short)uVar13 + (short)uVar45;
  sVar15 = sVar5 + sVar11;
  sVar16 = sVar9 + sVar18;
  sVar17 = sVar10 + sVar20;
  uVar13 = pmaddwd(CONCAT44(CONCAT22((short)((uint)(undefined4)DAT_006fcc00 >> 0x10),sVar5 - sVar11)
                            ,CONCAT22((short)(undefined4)DAT_006fcc00,(short)uVar13 - (short)uVar45)
                           ),DAT_006fcbe0);
  uVar45 = pmaddwd(CONCAT26((short)((uint)DAT_006fcc00._4_4_ >> 0x10),
                            CONCAT24(sVar10 - sVar20,
                                     CONCAT22((short)DAT_006fcc00._4_4_,sVar9 - sVar18))),
                   DAT_006fcbe0);
  sVar18 = (short)uVar8 + (short)uVar14;
  sVar22 = (short)((ulonglong)uVar8 >> 0x10);
  sVar5 = (short)((ulonglong)uVar14 >> 0x10);
  sVar20 = sVar22 + sVar5;
  sVar25 = (short)((ulonglong)uVar8 >> 0x20);
  sVar26 = (short)((ulonglong)uVar8 >> 0x30);
  sVar9 = (short)((ulonglong)uVar14 >> 0x20);
  sVar23 = sVar25 + sVar9;
  sVar10 = (short)((ulonglong)uVar14 >> 0x30);
  sVar27 = sVar26 + sVar10;
  sVar28 = (short)uVar8 - (short)uVar14;
  sVar22 = sVar22 - sVar5;
  sVar25 = sVar25 - sVar9;
  sVar26 = sVar26 - sVar10;
  uVar13 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  sVar5 = (short)uVar13 - sVar12;
  sVar9 = (short)((ulonglong)uVar13 >> 0x10) - sVar15;
  sVar10 = (short)((ulonglong)uVar13 >> 0x20) - sVar16;
  sVar11 = (short)((ulonglong)uVar13 >> 0x30) - sVar17;
  param_2[5] = CONCAT26(sVar27 + sVar17,
                        CONCAT24(sVar23 + sVar16,CONCAT22(sVar20 + sVar15,sVar18 + sVar12)));
  param_2[0xd] = CONCAT26(sVar26 + sVar11,
                          CONCAT24(sVar25 + sVar10,CONCAT22(sVar22 + sVar9,sVar28 + sVar5)));
  sVar18 = sVar18 - sVar12;
  sVar20 = sVar20 - sVar15;
  sVar23 = sVar23 - sVar16;
  sVar27 = sVar27 - sVar17;
  param_2[9] = CONCAT26(sVar26 - sVar11,
                        CONCAT24(sVar25 - sVar10,CONCAT22(sVar22 - sVar9,sVar28 - sVar5)));
  uVar13 = param_2[0xb];
  uVar45 = param_2[7];
  uVar8 = param_2[0xf];
  uVar14 = param_2[3];
  sVar5 = (short)uVar13 + (short)uVar45;
  sVar10 = (short)((ulonglong)uVar13 >> 0x10);
  sVar22 = (short)((ulonglong)uVar45 >> 0x10);
  sVar9 = sVar10 + sVar22;
  sVar12 = (short)((ulonglong)uVar13 >> 0x20);
  sVar16 = (short)((ulonglong)uVar13 >> 0x30);
  sVar25 = (short)((ulonglong)uVar45 >> 0x20);
  sVar11 = sVar12 + sVar25;
  sVar26 = (short)((ulonglong)uVar45 >> 0x30);
  sVar15 = sVar16 + sVar26;
  sVar17 = (short)uVar13 - (short)uVar45;
  sVar10 = sVar10 - sVar22;
  sVar12 = sVar12 - sVar25;
  sVar16 = sVar16 - sVar26;
  uVar24 = (undefined2)((uint)(undefined4)DAT_006fcc00 >> 0x10);
  uVar21 = (undefined2)(undefined4)DAT_006fcc00;
  uVar13 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar10),CONCAT22(uVar21,sVar17)),DAT_006fcbe8);
  uVar48 = (undefined2)DAT_006fcc00._4_4_;
  uVar49 = (undefined2)((uint)DAT_006fcc00._4_4_ >> 0x10);
  uVar45 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar16,CONCAT22(uVar48,sVar12))),DAT_006fcbe8);
  sVar28 = (short)uVar14 + (short)uVar8;
  sVar22 = (short)((ulonglong)uVar8 >> 0x10);
  sVar30 = (short)((ulonglong)uVar14 >> 0x10);
  sVar29 = sVar30 + sVar22;
  sVar25 = (short)((ulonglong)uVar8 >> 0x20);
  sVar32 = (short)((ulonglong)uVar14 >> 0x20);
  sVar39 = (short)((ulonglong)uVar14 >> 0x30);
  sVar31 = sVar32 + sVar25;
  sVar26 = (short)((ulonglong)uVar8 >> 0x30);
  sVar35 = sVar39 + sVar26;
  sVar42 = (short)uVar14 - (short)uVar8;
  sVar30 = sVar30 - sVar22;
  sVar32 = sVar32 - sVar25;
  sVar39 = sVar39 - sVar26;
  sVar37 = sVar28 + sVar5;
  sVar38 = sVar29 + sVar9;
  sVar40 = sVar31 + sVar11;
  sVar41 = sVar35 + sVar15;
  uVar45 = packssdw(CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8),
                    CONCAT44((int)((longlong)uVar45 >> 0x28),(int)uVar45 >> 8));
  uVar8 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar29 - sVar9),CONCAT22(uVar21,sVar28 - sVar5)),
                  DAT_006fcbe0);
  uVar13 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar35 - sVar15,CONCAT22(uVar48,sVar31 - sVar11))),
                   DAT_006fcbe0);
  uVar34 = packssdw(CONCAT44((int)((longlong)uVar8 >> 0x28),(int)uVar8 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  uVar8 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar10 + sVar30),CONCAT22(uVar21,sVar17 + sVar42)),
                  DAT_006fcbf8);
  uVar13 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar16 + sVar39,CONCAT22(uVar48,sVar12 + sVar32))),
                   DAT_006fcbf8);
  uVar14 = packssdw(CONCAT44((int)((longlong)uVar8 >> 0x28),(int)uVar8 >> 8),
                    CONCAT44((int)((longlong)uVar13 >> 0x28),(int)uVar13 >> 8));
  uVar47 = pmaddwd(CONCAT44(CONCAT22(uVar24,sVar30),CONCAT22(uVar21,sVar42)),DAT_006fcbf0);
  uVar8 = pmaddwd(CONCAT26(uVar49,CONCAT24(sVar39,CONCAT22(uVar48,sVar32))),DAT_006fcbf0);
  uVar13 = param_2[5];
  uVar8 = packssdw(CONCAT44((int)((longlong)uVar47 >> 0x28),(int)uVar47 >> 8),
                   CONCAT44((int)((longlong)uVar8 >> 0x28),(int)uVar8 >> 8));
  sVar9 = (short)((ulonglong)uVar14 >> 0x10);
  sVar11 = (short)((ulonglong)uVar14 >> 0x20);
  sVar15 = (short)((ulonglong)uVar14 >> 0x30);
  sVar16 = ((short)uVar14 + (short)uVar45) - sVar37;
  sVar17 = (sVar9 + (short)((ulonglong)uVar45 >> 0x10)) - sVar38;
  sVar25 = (sVar11 + (short)((ulonglong)uVar45 >> 0x20)) - sVar40;
  sVar28 = (sVar15 + (short)((ulonglong)uVar45 >> 0x30)) - sVar41;
  sVar30 = (short)uVar34 - sVar16;
  sVar31 = (short)((ulonglong)uVar34 >> 0x10) - sVar17;
  sVar32 = (short)((ulonglong)uVar34 >> 0x20) - sVar25;
  sVar35 = (short)((ulonglong)uVar34 >> 0x30) - sVar28;
  sVar5 = (short)((ulonglong)uVar13 >> 0x10);
  sVar10 = (short)((ulonglong)uVar13 >> 0x20);
  sVar12 = (short)((ulonglong)uVar13 >> 0x30);
  uVar45 = param_2[0xd];
  sVar39 = ((short)uVar8 - (short)uVar14) + sVar30;
  sVar42 = ((short)((ulonglong)uVar8 >> 0x10) - sVar9) + sVar31;
  sVar43 = ((short)((ulonglong)uVar8 >> 0x20) - sVar11) + sVar32;
  sVar46 = ((short)((ulonglong)uVar8 >> 0x30) - sVar15) + sVar35;
  param_2[1] = CONCAT26(sVar12 + sVar41,
                        CONCAT24(sVar10 + sVar40,CONCAT22(sVar5 + sVar38,(short)uVar13 + sVar37)));
  uVar8 = param_2[9];
  param_2[7] = CONCAT26(sVar27 - sVar46,
                        CONCAT24(sVar23 - sVar43,CONCAT22(sVar20 - sVar42,sVar18 - sVar39)));
  sVar22 = (short)((ulonglong)uVar45 >> 0x10);
  sVar26 = (short)((ulonglong)uVar45 >> 0x20);
  sVar29 = (short)((ulonglong)uVar45 >> 0x30);
  param_2[3] = CONCAT26(sVar29 + sVar28,
                        CONCAT24(sVar26 + sVar25,CONCAT22(sVar22 + sVar17,(short)uVar45 + sVar16)));
  sVar9 = (short)((ulonglong)uVar8 >> 0x10);
  sVar11 = (short)((ulonglong)uVar8 >> 0x20);
  sVar15 = (short)((ulonglong)uVar8 >> 0x30);
  param_2[5] = CONCAT26(sVar15 + sVar35,
                        CONCAT24(sVar11 + sVar32,CONCAT22(sVar9 + sVar31,(short)uVar8 + sVar30)));
  iVar3 = param_4[4] + param_5;
  uVar14 = *param_2;
  uVar34 = param_2[2];
  uVar36 = (ushort)(sVar18 + sVar39) >> 5;
  uVar7 = CONCAT24((ushort)((short)uVar45 - sVar16) >> 5,
                   CONCAT22((ushort)((short)uVar8 - sVar30) >> 5,uVar36));
  uVar44 = (ushort)((short)uVar13 - sVar37) >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  iVar3 = param_4[5] + param_5;
  uVar36 = (ushort)(sVar20 + sVar42) >> 5;
  uVar7 = CONCAT24((ushort)(sVar22 - sVar17) >> 5,CONCAT22((ushort)(sVar9 - sVar31) >> 5,uVar36));
  uVar44 = (ushort)(sVar5 - sVar38) >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  iVar3 = param_4[6] + param_5;
  uVar36 = (ushort)(sVar23 + sVar43) >> 5;
  uVar7 = CONCAT24((ushort)(sVar26 - sVar25) >> 5,CONCAT22((ushort)(sVar11 - sVar32) >> 5,uVar36));
  uVar44 = (ushort)(sVar10 - sVar40) >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  iVar3 = param_4[7] + param_5;
  uVar36 = (ushort)(sVar27 + sVar46) >> 5;
  uVar7 = CONCAT24((ushort)(sVar29 - sVar28) >> 5,CONCAT22((ushort)(sVar15 - sVar35) >> 5,uVar36));
  uVar44 = (ushort)(sVar12 - sVar41) >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(*param_4 + param_5);
  uVar13 = param_2[6];
  uVar45 = param_2[4];
  uVar36 = (ushort)uVar14 >> 5;
  uVar7 = CONCAT24((ushort)uVar45 >> 5,CONCAT22((ushort)uVar34 >> 5,uVar36));
  uVar44 = (ushort)uVar13 >> 5;
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[1] + param_5);
  uVar36 = (ushort)((ulonglong)uVar14 >> 0x10) >> 5;
  uVar7 = CONCAT24((ushort)((ulonglong)uVar45 >> 0x10) >> 5,
                   CONCAT22((ushort)((ulonglong)uVar34 >> 0x10) >> 5,uVar36));
  uVar44 = (ushort)((ulonglong)uVar13 >> 0x10) >> 5;
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[2] + param_5);
  uVar36 = (ushort)((ulonglong)uVar14 >> 0x20) >> 5;
  uVar7 = CONCAT24((ushort)((ulonglong)uVar45 >> 0x20) >> 5,
                   CONCAT22((ushort)((ulonglong)uVar34 >> 0x20) >> 5,uVar36));
  uVar44 = (ushort)((ulonglong)uVar13 >> 0x20) >> 5;
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[3] + param_5);
  uVar36 = (ushort)((ulonglong)uVar14 >> 0x35);
  uVar7 = CONCAT24((ushort)((ulonglong)uVar45 >> 0x35),
                   CONCAT22((ushort)((ulonglong)uVar34 >> 0x35),uVar36));
  uVar44 = (ushort)((ulonglong)uVar13 >> 0x35);
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[4] + param_5);
  uVar13 = param_2[1];
  uVar45 = param_2[3];
  uVar8 = param_2[5];
  uVar14 = param_2[7];
  uVar34 = param_2[8];
  uVar36 = (ushort)uVar13 >> 5;
  uVar7 = CONCAT24((ushort)uVar8 >> 5,CONCAT22((ushort)uVar45 >> 5,uVar36));
  uVar44 = (ushort)uVar14 >> 5;
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[5] + param_5);
  uVar47 = param_2[10];
  uVar36 = (ushort)((ulonglong)uVar13 >> 0x10) >> 5;
  uVar7 = CONCAT24((ushort)((ulonglong)uVar8 >> 0x10) >> 5,
                   CONCAT22((ushort)((ulonglong)uVar45 >> 0x10) >> 5,uVar36));
  uVar44 = (ushort)((ulonglong)uVar14 >> 0x10) >> 5;
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[6] + param_5);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xe];
  uVar36 = (ushort)((ulonglong)uVar13 >> 0x20) >> 5;
  uVar7 = CONCAT24((ushort)((ulonglong)uVar8 >> 0x20) >> 5,
                   CONCAT22((ushort)((ulonglong)uVar45 >> 0x20) >> 5,uVar36));
  uVar44 = (ushort)((ulonglong)uVar14 >> 0x20) >> 5;
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  puVar4 = (undefined1 *)(param_4[7] + param_5);
  uVar36 = (ushort)((ulonglong)uVar13 >> 0x35);
  uVar7 = CONCAT24((ushort)((ulonglong)uVar8 >> 0x35),
                   CONCAT22((ushort)((ulonglong)uVar45 >> 0x35),uVar36));
  uVar44 = (ushort)((ulonglong)uVar14 >> 0x35);
  *puVar4 = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  puVar4[1] = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  puVar4[2] = *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  puVar4[3] = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  iVar3 = *param_4 + param_5;
  uVar36 = (ushort)uVar34 >> 5;
  uVar7 = CONCAT24((ushort)uVar1 >> 5,CONCAT22((ushort)uVar47 >> 5,uVar36));
  uVar44 = (ushort)uVar2 >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  iVar3 = param_4[1] + param_5;
  uVar36 = (ushort)((ulonglong)uVar34 >> 0x10) >> 5;
  uVar7 = CONCAT24((ushort)((ulonglong)uVar1 >> 0x10) >> 5,
                   CONCAT22((ushort)((ulonglong)uVar47 >> 0x10) >> 5,uVar36));
  uVar44 = (ushort)((ulonglong)uVar2 >> 0x10) >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  iVar3 = param_4[2] + param_5;
  uVar36 = (ushort)((ulonglong)uVar34 >> 0x20) >> 5;
  uVar7 = CONCAT24((ushort)((ulonglong)uVar1 >> 0x20) >> 5,
                   CONCAT22((ushort)((ulonglong)uVar47 >> 0x20) >> 5,uVar36));
  uVar44 = (ushort)((ulonglong)uVar2 >> 0x20) >> 5;
  *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(iVar3 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(iVar3 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  param_5 = param_4[3] + param_5;
  uVar36 = (ushort)((ulonglong)uVar34 >> 0x35);
  uVar7 = CONCAT24((ushort)((ulonglong)uVar1 >> 0x35),
                   CONCAT22((ushort)((ulonglong)uVar47 >> 0x35),uVar36));
  uVar44 = (ushort)((ulonglong)uVar2 >> 0x35);
  *(undefined1 *)(param_5 + 4) = *(undefined1 *)(param_6 + (uVar36 & 0x3ff));
  *(undefined1 *)(param_5 + 5) = *(undefined1 *)(param_6 + ((uint)((uint6)uVar7 >> 0x10) & 0x3ff));
  *(undefined1 *)(param_5 + 6) =
       *(undefined1 *)(param_6 + ((uint)(CONCAT26(uVar44,uVar7) >> 0x20) & 0x3ff));
  *(undefined1 *)(param_5 + 7) = *(undefined1 *)(param_6 + (uVar44 & 0x3ff));
  return;
}

