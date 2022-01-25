Q0 = savedAgentResultStruct.TrainingStats.EpisodeQ0;
reward = savedAgentResultStruct.TrainingStats.EpisodeReward;
aveReward = savedAgentResultStruct.TrainingStats.AverageReward;
episode = savedAgentResultStruct.TrainingStats.EpisodeIndex;

figure;
p = plot(episode, reward, episode, aveReward, episode, Q0);
xlabel("Episode Number")
ylabel("Episode Reward")
p(1).Marker = 'o';
p(2).Marker = '*';
p(3).Marker = '*';
xlim([0 length(episode)])