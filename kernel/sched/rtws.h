#ifndef RTWS_H
#define RTWS_H

void init_timer_rtws(struct sched_rtws_entity *rtws_se);
u64 get_next_activation_period(struct sched_rtws_entity *rtws_se);
int deadline_missed_rtws(struct rq *rq, struct sched_rtws_entity *rtws_se);
void update_task_rtws(struct rq *rq, struct sched_rtws_entity *rtws_se);
void start_timer_rtws(struct rq *rq, struct sched_rtws_entity *rtws_se);
void init_rtws_global_rq(struct global_rq *global_rq);
void init_rtws_rq(struct rtws_rq *rtws_rq, struct rq *rq, struct global_rq *global_rq);

#endif // RTWS_H
